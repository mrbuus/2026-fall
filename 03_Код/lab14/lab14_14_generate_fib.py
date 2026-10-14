# Лаборатори №14-2, Даалгавар 5
# generate_fib(n) - Фибоначчийн дарааллын эхний n гишүүнийг жагсаалтаар буцаана.


def generate_fib(n):
    fib = []
    a, b = 0, 1
    for i in range(n):
        fib.append(a)
        a, b = b, a + b
    return fib


n = int(input("Хэдэн гишүүн хэрэгтэй вэ? "))
print(generate_fib(n))
