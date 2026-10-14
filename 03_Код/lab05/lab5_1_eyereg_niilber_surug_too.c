/* Лаборатори №5, Даалгавар
   n, a1, ..., an бүхэл тоонууд өгөгдсөн бол дараалалд байгаа эерэг
   гишүүдийн нийлбэр, сөрөг гишүүдийн тоог ол. */
#include <stdio.h>

int main()
{
    int n, i, a, eyereg_niilber, surug_too;

    printf("n = ");
    scanf("%d", &n);

    eyereg_niilber = 0;
    surug_too = 0;

    for (i = 1; i <= n; i++)
    {
        printf("a%d = ", i);
        scanf("%d", &a);

        if (a > 0)
            eyereg_niilber = eyereg_niilber + a;
        else if (a < 0)
            surug_too++;
    }

    printf("Эерэг гишүүдийн нийлбэр = %d\n", eyereg_niilber);
    printf("Сөрөг гишүүдийн тоо     = %d\n", surug_too);

    return 0;
}
