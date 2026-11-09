/* Лаборатори №1-2, Даалгавар 2
   Үйлдвэр эхний өдөр 36 кг жигнэмэг, дараагийн өдөр үүнээс 2 дахин цөөн
   жигнэмэг үйлдвэрлэв. Эхний өдөр дараагийн өдрөөс хэдэн кг илүү
   үйлдвэрлэсэн бэ? */
#include <stdio.h>

int main()
{
    int ehnii, daraagiin, ilvv;

    ehnii = 36;
    daraagiin = ehnii / 2;
    ilvv = ehnii - daraagiin;

    printf("Эхний өдөр     = %d кг\n", ehnii);
    printf("Дараагийн өдөр = %d кг\n", daraagiin);
    printf("Эхний өдөр %d кг илүү үйлдвэрлэсэн\n", ilvv);

    return 0;
}
