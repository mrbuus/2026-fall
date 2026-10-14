# Лаборатори №15 (класс), Даалгавар 3
# Product класс: name, price, quantity.
# total_price() -> price * quantity,  is_stock() -> quantity > 0


class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

    def total_price(self):
        return self.price * self.quantity

    def is_stock(self):
        return self.quantity > 0

    def __str__(self):
        return f"{self.name} | Price: {self.price} | Qty: {self.quantity} | Total: {self.total_price()}"


products = [
    Product("iPhone", 1500, 3),
    Product("Laptop", 2200, 0),
    Product("Mouse", 25, 10),
]

niit = 0
for p in products:
    print(p)
    niit += p.total_price()
    if p.is_stock():
        print("   Нөөцөд байгаа")
    else:
        print("   Нөөц дууссан")

print("Бүх барааны нийт үнэ:", niit)
