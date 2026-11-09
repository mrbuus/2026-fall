/* Лаборатори №2, Нэмэлт даалгавар 3
   Үйлдвэр эхний өдөр 36 кг жигнэмэг, дараагийн өдөр үүнээс 2 дахин цөөн
   жигнэмэг үйлдвэрлэв. Эхний өдөр дараагийн өдрөөс хэдэн кг илүү
   үйлдвэрлэсэн бэ? (Блок схемийг lab01/block_schem/lab1_5_jignemeg.png-оос үзнэ.) */
#include <stdio.h>

int main()
{
    int ehnii, daraagiin;

    ehnii = 36;
    daraagiin = ehnii / 2;

    printf("Эхний өдөр %d кг илүү үйлдвэрлэсэн\n", ehnii - daraagiin);

    return 0;
}
