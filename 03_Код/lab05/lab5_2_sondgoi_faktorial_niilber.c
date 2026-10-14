/* Лаборатори №5 (FOR давталтын бодлого 1)
   Өгөгдсөн n тоо хүртэлх сондгой тоонуудын факториалуудын нийлбэрийг ол.
   Жишээ нь n=5 бол 1! + 3! + 5! = 1 + 6 + 120 = 127. */
#include <stdio.h>

int main()
{
    int n, i, j;
    double fakt, niilber;

    printf("n = ");
    scanf("%d", &n);

    niilber = 0;
    for (i = 1; i <= n; i = i + 2)
    {
        fakt = 1;
        for (j = 1; j <= i; j++)
        {
            fakt = fakt * j;
        }
        niilber = niilber + fakt;
    }

    printf("%d хүртэлх сондгой тоонуудын факториалын нийлбэр = %.0f\n", n, niilber);

    return 0;
}
