# Лаборатори №15 (модуль), Даалгавар 1
# math модулиар 2 тооны квадрат язгуур, sin, cos, tan утгыг гаргах.
import math

a = float(input("1-р тоо: "))
b = float(input("2-р тоо: "))

for x in [a, b]:
    print("x =", x)
    if x >= 0:
        print("  sqrt =", round(math.sqrt(x), 4))
    print("  sin  =", round(math.sin(x), 4))
    print("  cos  =", round(math.cos(x), 4))
    print("  tan  =", round(math.tan(x), 4))
