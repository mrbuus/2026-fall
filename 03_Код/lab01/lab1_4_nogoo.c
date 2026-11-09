/* Лаборатори №1-2, Даалгавар 1
   Гэрэлмаа 13 шуудай байцай, Солонго түүнээс 9-өөр илүү төмс, Баяраа энэ
   хоёрыг нийлүүлснээс 2 дахин их манжин хураав. Бүгд хэдэн шуудай ногоо
   хураасан бэ? */
#include <stdio.h>

int main()
{
    int baitsai, tums, manjin, niit;

    baitsai = 13;
    tums = baitsai + 9;
    manjin = 2 * (baitsai + tums);
    niit = baitsai + tums + manjin;

    printf("Байцай = %d шуудай\n", baitsai);
    printf("Төмс   = %d шуудай\n", tums);
    printf("Манжин = %d шуудай\n", manjin);
    printf("Бүгд   = %d шуудай ногоо\n", niit);

    return 0;
}
