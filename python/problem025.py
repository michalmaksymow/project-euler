from timer import Timer


def main():
    Timer()

    f1 = 1
    f2 = 1
    term = 2

    while len(str(f2)) < 1000:
        f1, f2 = f2, f1 + f2
        term += 1

    print(term)


if __name__ == "__main__":
    main()
