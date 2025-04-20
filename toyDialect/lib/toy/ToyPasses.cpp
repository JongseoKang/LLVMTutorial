struct LowerToyPass : public PassWrapper<LowerToyPass, OperationPass<mlir::ModuleOp>> {
    void runOnOperation() override {
      getOperation().walk([](toy::AddOp op) {
        op.emitRemark() << "This is a toy add op!";
      });
    }
};

std::unique_ptr<Pass> createLowerToyPass() {
    return std::make_unique<LowerToyPass>();
  }
