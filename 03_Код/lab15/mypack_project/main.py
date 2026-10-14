# Лаборатори №15 (пакет), Даалгавар 8
# mypack пакетийн string_ops, math_ops модулиудын функцийг дуудаж ажиллуулах.
from mypack import string_ops, math_ops

ug = "Programming"
print("Том үсгээр:", string_ops.to_upper(ug))
print("Урвуу:", string_ops.reverse(ug))
print("Эгшгийн тоо:", string_ops.count_vowels(ug))

print("5! =", math_ops.factorial(5))
print("8 тэгш эсэх:", math_ops.is_even(8))
print("Дундаж [2, 4, 9]:", math_ops.average([2, 4, 9]))
