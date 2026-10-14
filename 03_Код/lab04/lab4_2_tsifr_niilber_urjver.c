/* Лаборатори №4, Даалгавар 2
   Өгөгдсөн тооны бүх цифрийн нийлбэр ба үржвэрийг ол. */
#include <stdio.h>

int main()
{
    int n, tsifr, niilber, urjver;

    printf("Тоо оруул: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    niilber = 0;
    urjver = 1;

    do
    {
        tsifr = n % 10;
        niilber = niilber + tsifr;
        urjver = urjver * tsifr;
        n = n / 10;
    } while (n > 0);

    printf("Цифрүүдийн нийлбэр = %d\n", niilber);
    printf("Цифрүүдийн үржвэр  = %d\n", urjver);

    return 0;
}
