# Лаборатори №14-2, Даалгавар 4
# sum_list(lst) - жагсаалтын бүх элементийн нийлбэрийг буцаана.


def sum_list(lst):
    s = 0
    for x in lst:
        s += x
    return s


toonuud = [3, 8, 1, 10, 5]
print("Жагсаалт:", toonuud)
print("Нийлбэр:", sum_list(toonuud))
