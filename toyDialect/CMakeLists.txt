mlir_tablegen(ToyOps.h.inc -gen-op-decls -name Toy)
mlir_tablegen(ToyOps.cpp.inc -gen-op-defs -name Toy)

add_mlir_dialect_library(ToyDialect
  lib/toy/ToyDialect.cpp
  lib/toy/ToyOps.cpp

  DEPENDS
  ToyOpsIncGen

  LINK_LIBS PUBLIC
  MLIRIR
)
