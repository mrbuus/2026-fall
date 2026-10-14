# Лаборатори №15 (модуль), Даалгавар 5, 6
# calculator_module-ийн функцуудыг дуудаж үр дүнг хэвлэх программ.
from calculator_module import add, subtract, multiply, divide

a = float(input("a = "))
b = float(input("b = "))

print("a + b =", add(a, b))
print("a - b =", subtract(a, b))
print("a * b =", multiply(a, b))
print("a / b =", divide(a, b))
