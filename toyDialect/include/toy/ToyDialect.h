#pragma once
#include "mlir/IR/Dialect.h"

namespace toy {
class ToyDialect : public mlir::Dialect {
public:
  explicit ToyDialect(mlir::MLIRContext *ctx);
};
} // namespace toy
