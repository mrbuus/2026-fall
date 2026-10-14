# Лаборатори №15 (класс), Даалгавар 4
# Rectangle класс: width, height. area(), perimeter() методтой.
# 2 объект үүсгээд аль нь том талбайтайг харьцуулна.


class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

    def perimeter(self):
        return 2 * (self.width + self.height)

    def __str__(self):
        return f"Rectangle: {self.width}x{self.height} | Area={self.area()} | Perimeter={self.perimeter()}"


r1 = Rectangle(10, 5)
r2 = Rectangle(7, 8)

print(r1)
print(r2)

if r1.area() > r2.area():
    print("Эхний тэгш өнцөгт том талбайтай")
elif r1.area() < r2.area():
    print("Хоёр дахь тэгш өнцөгт том талбайтай")
else:
    print("Хоёулаа ижил талбайтай")
