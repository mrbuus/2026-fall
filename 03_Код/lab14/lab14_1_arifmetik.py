# Лаборатори №14-1, Даалгавар 1
# Хоёр тооны +, -, *, /, //, %, ** үйлдлийг хийх программ.

a = int(input("a = "))
b = int(input("b = "))

print("a+b =", a + b)
print("a-b =", a - b)
print("a*b =", a * b)
if b != 0:
    print("a/b =", a / b)
    print("a//b =", a // b)
    print("a%b =", a % b)
else:
    print("b = 0 тул хуваах боломжгүй")
print("a**b =", a ** b)
