function benchmark(functionToExecute) {
  const startTimestamp = performance.now();
  const functionReturnValue = functionToExecute();
  const endTimestamp = performance.now();

  return {
    value: functionReturnValue,
    executionTime: endTimestamp - startTimestamp,
  };
}

module.exports = benchmark;
