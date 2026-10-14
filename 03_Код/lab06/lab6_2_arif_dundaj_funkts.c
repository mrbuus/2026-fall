/* Лаборатори №6 (функцийн бодлого 1)
   Хичээл №4-ийн эхний бодлого буюу M-ээс E хүртэлх тоонуудын арифметик
   дундажийг функц ашиглан бод. */
#include <stdio.h>

float arif_dundaj(int M, int E);

int main()
{
    int M, E;

    printf("M = ");
    scanf("%d", &M);
    printf("E = ");
    scanf("%d", &E);

    if (M > E)
    {
        printf("M нь E-ээс бага буюу тэнцүү байх ёстой!\n");
        return 0;
    }

    printf("Арифметик дундаж = %.2f\n", arif_dundaj(M, E));

    return 0;
}

float arif_dundaj(int M, int E)
{
    int i;
    float s = 0;

    for (i = M; i <= E; i++)
        s = s + i;

    return s / (E - M + 1);
}
