def solution():
    a, b = 1, 2
    total = 0
    while b < 4000000:
        if b % 2 == 0:
            total += b
        a, b = b, a + b
    return total


if __name__ == "__main__":
    print(solution())
