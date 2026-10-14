# Лаборатори №14-1, Даалгавар 2
# math модулийг ашиглан квадрат язгуур, π тоог хэвлэх.
import math

x = float(input("Тоо оруул: "))

if x >= 0:
    print("sqrt(", x, ") =", math.sqrt(x))
else:
    print("Сөрөг тооноос квадрат язгуур гаргахгүй")
print("pi =", math.pi)
