//===- Types.h - Linalg Types forward declarations ------------------------===//
//
// Copyright 2019 The MLIR Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// =============================================================================

#ifndef LINALG1_TYPES_H_
#define LINALG1_TYPES_H_

#include "mlir/IR/Types.h"

namespace linalg {

enum LinalgTypes {
  Range = mlir::Type::FIRST_LINALG_TYPE,
  View,
  LAST_USED_LINALG_TYPE = View,
};

} // namespace linalg

#include "linalg1/RangeType.h"
#include "linalg1/ViewType.h"

#endif // LINALG1_TYPES_H_
