# Лаборатори №14-1, Даалгавар 8
# x, y, z тоонуудаас R = (x^2 + y^2) / (z + 1) + (x*y - z^3) илэрхийллийг бодох.

x = float(input("x = "))
y = float(input("y = "))
z = float(input("z = "))

if z + 1 == 0:
    print("z = -1 үед хуваарь тэг болно!")
else:
    R = (x ** 2 + y ** 2) / (z + 1) + (x * y - z ** 3)
    print("R =", R)
