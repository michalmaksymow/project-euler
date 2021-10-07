const LIMIT: number = 1000;

let result: number = 0;

for (let i: number = 3; i < LIMIT; i += 3) {
  result += i;
}

for (let i: number = 5; i < LIMIT; i += 5) {
  result += i;
}

for (let i: number = 15; i < LIMIT; i += 15) {
  result -= i;
}

console.log(result);
