/* Лаборатори №2, Нэмэлт даалгавар 1
   Натурал N хүртэлх сондгой тоонуудын үржвэрийг олох.
   Жишээ: N = 7 бол 1*3*5*7 = 105 */
#include <stdio.h>

int main()
{
    int N, i;
    long long urjver;

    printf("N натурал тоо оруул: ");
    scanf("%d", &N);

    if (N < 1)
    {
        printf("N натурал тоо байх ёстой!\n");
        return 0;
    }

    urjver = 1;
    i = 1;
    while (i <= N)
    {
        urjver = urjver * i;
        i = i + 2;
    }

    printf("%d хүртэлх сондгой тоонуудын үржвэр = %lld\n", N, urjver);

    return 0;
}
