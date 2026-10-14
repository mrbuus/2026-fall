/* Лаборатори №4 (нөхцөлтэй давталтын бодлого 2)
   Анхны утга 2 байсан тоог 200 хүртэл 4-өөр нэмэгдүүлэхэд нийт хэдэн
   утга байх вэ? Эдгээр утгуудын геометр дундажийг ол. */
#include <stdio.h>
#include <math.h>

int main()
{
    int x, too;
    double urjver, geometr;

    urjver = 1;
    too = 0;
    x = 2;
    while (x <= 200)
    {
        urjver = urjver * x;
        too++;
        x = x + 4;
    }

    geometr = pow(urjver, 1.0 / too);

    printf("Нийт утгын тоо = %d\n", too);
    printf("Геометр дундаж = %.4f\n", geometr);

    return 0;
}
