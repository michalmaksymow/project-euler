const benchmark = require("./benchmark");

function firstMethod() {}

function secondMethod() {
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

benchmark(secondMethod);
