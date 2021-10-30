function benchmark(functionToExecute) {
  const startTimestamp = performance.now();
  const functionReturnValue = functionToExecute();
  const endTimestamp = performance.now();

  console.log(
    "The solution: \n\t",
    `Took (milliseconds):\t ${endTimestamp - startTimestamp} \n\t`,
    `Returned:\t\t ${functionReturnValue} \n`
  );
}

module.exports = benchmark;
