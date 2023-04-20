def prime_factors(n: int) -> list[int]:
    factors = []
    d = 2
    while d * d <= n:
        while (n % d) == 0:
            factors.append(d)
            n //= d
        d += 1
    if n > 1:
        factors.append(n)
    return factors


def solve() -> int:
    n = 600851475143
    factors = prime_factors(n)
    return max(factors)


if __name__ == '__main__':
    print(solve())
