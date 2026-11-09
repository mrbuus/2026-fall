/* Лаборатори №2, Нэмэлт даалгавар 2
   Гэрэлмаа 13 шуудай байцай, Солонго түүнээс 9-өөр илүү төмс, Баяраа энэ
   хоёрыг нийлүүлснээс 2 дахин их манжин хураав. Бүгд хэдэн шуудай ногоо
   хураасан бэ? (Блок схемийг lab01/block_schem/lab1_4_nogoo.png-оос үзнэ.) */
#include <stdio.h>

int main()
{
    int baitsai, tums, manjin, niit;

    baitsai = 13;
    tums = baitsai + 9;
    manjin = 2 * (baitsai + tums);
    niit = baitsai + tums + manjin;

    printf("Бүгд %d шуудай ногоо хураасан\n", niit);

    return 0;
}
