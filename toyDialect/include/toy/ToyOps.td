//===- ToyOps.td - Toy Dialect Ops Definition -------------------*- tablegen -*-===//
include "mlir/IR/OpBase.td"

def Toy_Dialect : Dialect {
  let name = "toy";
  let cppNamespace = "toy";
}

def Toy_AddOp : Toy_Op<"add", [NoSideEffect]> {
  let summary = "add two toy values";
  let arguments = (ins AnyType:$lhs, AnyType:$rhs);
  let results = (outs AnyType:$result);
  let assemblyFormat = "$lhs `+` $rhs";
}
