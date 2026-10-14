# mypack.math_ops - тоон функцууд


def factorial(n):
    f = 1
    for i in range(1, n + 1):
        f *= i
    return f


def is_even(n):
    return n % 2 == 0


def average(lst):
    return sum(lst) / len(lst)
