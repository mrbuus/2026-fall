/* Лаборатори №4, Нэмэлт 1
   Компьютер 1-100 хооронд нууц тоо үүсгэнэ. Хэрэглэгч зөв таах хүртэл
   while давталтаар оролдлого хийлгэнэ. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nuuts, taasan, oroldlogo;

    srand(time(NULL));
    nuuts = rand() % 100 + 1;

    oroldlogo = 0;
    taasan = 0;

    while (taasan != nuuts)
    {
        printf("1-100 хооронд тоо таа: ");
        scanf("%d", &taasan);
        oroldlogo++;

        if (taasan < nuuts)
            printf("Нууц тоо үүнээс их байна.\n");
        else if (taasan > nuuts)
            printf("Нууц тоо үүнээс бага байна.\n");
    }

    printf("Зөв! Нууц тоо %d байсан. Та %d удаа оролдлоо.\n", nuuts, oroldlogo);

    return 0;
}
