# Лаборатори №15 (класс), Даалгавар 2
# Student класс: name, sid, gpa. get_status() нь gpa >= 3.0 бол "Good",
# бусад үед "Needs Improvement" буцаана. 10 оюутан үүсгэж жагсаалтаар хэвлэнэ.


class Student:
    def __init__(self, name, sid, gpa):
        self.name = name
        self.sid = sid
        self.gpa = gpa

    def get_status(self):
        if self.gpa >= 3.0:
            return "Good"
        else:
            return "Needs Improvement"

    def __str__(self):
        return f"Name: {self.name}, ID: {self.sid}, GPA: {self.gpa}"


students = [
    Student("Бат", 20250123, 3.2),
    Student("Сараа", 20250124, 3.8),
    Student("Дорж", 20250125, 2.7),
    Student("Нараа", 20250126, 3.5),
    Student("Тэмүүлэн", 20250127, 2.9),
    Student("Анар", 20250128, 3.0),
    Student("Билгүүн", 20250129, 2.4),
    Student("Хулан", 20250130, 3.9),
    Student("Мөнх", 20250131, 3.1),
    Student("Золбоо", 20250132, 2.6),
]

for s in students:
    print(s, "| Status:", s.get_status())
