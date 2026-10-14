# Лаборатори №14-2, Даалгавар 2
# format_date(y, m, d) - огноог "YYYY/MM/DD" хэлбэрт оруулж буцаана.


def format_date(y, m, d):
    return f"{y:04d}/{m:02d}/{d:02d}"


y = int(input("Он: "))
m = int(input("Сар: "))
d = int(input("Өдөр: "))

print(format_date(y, m, d))
