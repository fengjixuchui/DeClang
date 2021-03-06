//===- SplitBasicBlock.h - Split basicblock pass --------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains includes and defines for the split basicblock pass
//
//===----------------------------------------------------------------------===//

#ifndef _SPLITBASICBLOCK_INCLUDES_
#define _SPLITBASICBLOCK_INCLUDES_

#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/Transforms/Utils/Local.h" // For DemoteRegToStack and DemotePHIToStack
#include "llvm/Transforms/IPO.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/JSON.h"

using namespace std;

namespace llvm {
  void initializeSplitBasicBlockPass(PassRegistry &Registry);
  Pass *createSplitBasicBlock(llvm::json::Value* configJson, llvm::raw_fd_ostream *logFile, std::string homeDir);
}

#endif
