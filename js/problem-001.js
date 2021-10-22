const execute = require("./execute");

function firstMethod() {
  const LIMIT = 1000;

  let result = 0;

  for (let i = 3; i < LIMIT; i += 3) {
    result += i;
  }

  for (let i = 5; i < LIMIT; i += 5) {
    result += i;
  }

  for (let i = 15; i < LIMIT; i += 15) {
    result -= i;
  }

  return result;
}

// TODO: Make execute take as many functions as I want, and format the results
const firstMethodResults = execute(firstMethod);
console.log(
  "The first solution method: \n\t",
  `Took (milliseconds):\t ${firstMethodResults.executionTime} \n\t`,
  `Returned:\t\t ${firstMethodResults.value} \n`
);
