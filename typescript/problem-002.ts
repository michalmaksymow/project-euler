const sequence: number[] = [1, 2, 3];

let result: number = 2;

while (sequence[2] < 4000000) {
  sequence[2] = sequence[1] + sequence[0];

  if (sequence[2] % 2 == 0) {
    result += sequence[2];
  }

  sequence[0] = sequence[1];
  sequence[1] = sequence[2];
}

console.log(result);
