// Copyright 2011 the V8 project authors. All rights reserved.
//
// Copyright IBM Corp. 2012, 2015. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_S390_CODEGEN_S390_H_
#define V8_S390_CODEGEN_S390_H_

#include "src/macro-assembler.h"

namespace v8 {
namespace internal {

class StringCharLoadGenerator : public AllStatic {
 public:
  // Generates the code for handling different string types and loading the
  // indexed character into |result|.  We expect |index| as untagged input and
  // |result| as untagged output.
  static void Generate(MacroAssembler* masm, Register string, Register index,
                       Register result, Label* call_runtime);

 private:
  DISALLOW_COPY_AND_ASSIGN(StringCharLoadGenerator);
};
}  // namespace internal
}  // namespace v8

#endif  // V8_S390_CODEGEN_S390_H_
