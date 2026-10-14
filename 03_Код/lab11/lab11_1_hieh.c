/* Лаборатори №11, Даалгавар
   n, m натурал тоонууд өгөгдсөн бол ХИЕХ(n, m)-г ол.
   r нь n-ийг m-д хуваасан үлдэгдэл бол ХИЕХ(n, m) = ХИЕХ(m, r)
   тэнцэтгэлийг ашиглан рекурсив функц бич. */
#include <stdio.h>

int hieh(int n, int m);

int main()
{
    int n, m;

    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);

    printf("ХИЕХ(%d, %d) = %d\n", n, m, hieh(n, m));

    return 0;
}

int hieh(int n, int m)
{
    if (m == 0)
        return n;
    else
        return hieh(m, n % m);
}
