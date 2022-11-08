/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// This file defines the operations used in the LHLO dialect.

#ifndef MLIR_HLO_DIALECT_LHLO_GPU_IR_LHLO_GPU_OPS_H
#define MLIR_HLO_DIALECT_LHLO_GPU_IR_LHLO_GPU_OPS_H

#include "llvm/ADT/StringRef.h"
#include "mhlo/IR/hlo_ops.h"
#include "mlir/IR/Attributes.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/Location.h"
#include "mlir/IR/MLIRContext.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/IR/Operation.h"
#include "mlir/IR/Types.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"

namespace mlir {
class OpBuilder;
}  // namespace mlir

// Include order below matters.
#include "lhlo_gpu/IR/lhlo_gpu_ops_dialect.h.inc"
#include "lhlo_gpu/IR/lhlo_gpu_ops_enums.h.inc"
#define GET_ATTRDEF_CLASSES
#include "lhlo_gpu/IR/lhlo_gpu_ops_attrdefs.h.inc"
#define GET_OP_CLASSES
#include "lhlo_gpu/IR/lhlo_gpu_ops.h.inc"

#endif  // MLIR_HLO_DIALECT_LHLO_GPU_IR_LHLO_GPU_OPS_H
