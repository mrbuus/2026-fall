# Лаборатори №15 (класс), Даалгавар 1
# Car класс: brand, model, year. print() хийхэд "Toyota Prius (2010)" хэлбэрээр хэвлэгдэнэ.


class Car:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year

    def __str__(self):
        return f"{self.brand} {self.model} ({self.year})"


car1 = Car("Toyota", "Prius", 2010)
car2 = Car("Hyundai", "Sonata", 2018)

print(car1)
print(car2)
