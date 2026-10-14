/* Лаборатори №4 (нөхцөлтэй давталтын бодлого 1)
   Өгөгдсөн M-ээс E хүртэлх тоонуудын арифметик дундажийг ол. */
#include <stdio.h>

int main()
{
    int M, E, i, too;
    float niilber, dundaj;

    printf("M = ");
    scanf("%d", &M);
    printf("E = ");
    scanf("%d", &E);

    if (M > E)
    {
        printf("M нь E-ээс бага буюу тэнцүү байх ёстой!\n");
        return 0;
    }

    niilber = 0;
    too = 0;
    i = M;
    while (i <= E)
    {
        niilber = niilber + i;
        too++;
        i++;
    }

    dundaj = niilber / too;

    printf("%d-ээс %d хүртэлх тоонуудын арифметик дундаж = %.2f\n", M, E, dundaj);

    return 0;
}
