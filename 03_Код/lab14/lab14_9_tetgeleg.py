# Лаборатори №14-1, Даалгавар 9
# Нас 18-аас дээш, оюутан, дүн >= 85 бол тэтгэлэг олгоно.
# Дүн >= 95 бол нэмэлт bonus авна.

nas = int(input("Нас: "))
hariult = input("Оюутан мөн үү? (тийм/үгүй): ")
dun = float(input("Дүнгийн хувь: "))

is_student = hariult == "тийм"

tetgeleg = nas > 18 and is_student and dun >= 85
bonus = tetgeleg and dun >= 95

print("Тэтгэлэг:", "Yes" if tetgeleg else "No")
print("Bonus:", "Yes" if bonus else "No")
