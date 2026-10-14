# Лаборатори №14-2, Даалгавар 1
# max_in_list(lst) - жагсаалтын хамгийн их элементийг буцаана.
# is_prime(n)      - анхны тоо бол True, үгүй бол False буцаана.


def max_in_list(lst):
    return max(lst)


def is_prime(n):
    if n < 2:
        return False
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True


toonuud = [12, 45, 7, 89, 23]
print("Жагсаалт:", toonuud)
print("Хамгийн их:", max_in_list(toonuud))

n = int(input("Тоо оруул: "))
print(n, "анхны тоо мөн эсэх:", is_prime(n))
