# Лаборатори №15 (модуль), Даалгавар 3
# datetime модулиар өнөөдрийн огноо, цагийг хэвлэх.
import datetime

odoo = datetime.datetime.now()

print("Өнөөдөр:", odoo.strftime("%Y-%m-%d"))
print("Цаг:", odoo.strftime("%H:%M:%S"))
