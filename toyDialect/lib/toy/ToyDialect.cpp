#include "toy/ToyDialect.h"
#include "toy/ToyOps.h"

using namespace toy;

ToyDialect::ToyDialect(mlir::MLIRContext *ctx)
    : Dialect("toy", ctx, mlir::TypeID::get<ToyDialect>()) {
  addOperations<
#define GET_OP_LIST
#include "toy/ToyOps.cpp.inc"
      >();
}
