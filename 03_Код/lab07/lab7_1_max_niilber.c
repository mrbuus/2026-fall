/* Лаборатори №7, Даалгавар
   Функц-1: A, B тооны хамгийн ихийг олно.
   Функц-2: N тоо аваад 1-ээс N хүртэлх тоонуудын нийлбэрийг олно.
   Программын хариу: Функц-1 + Функц-2
   Жишээ: A=5, B=4, N=8 бол 5 + 36 = 41. */
#include <stdio.h>

int ih(int a, int b);
int niilber(int n);

int main()
{
    int A, B, N, f1, f2;

    printf("A = ");
    scanf("%d", &A);
    printf("B = ");
    scanf("%d", &B);
    printf("N = ");
    scanf("%d", &N);

    f1 = ih(A, B);
    f2 = niilber(N);

    printf("Ф1 = %d\n", f1);
    printf("Ф2 = %d\n", f2);
    printf("Ф1 + Ф2 = %d\n", f1 + f2);

    return 0;
}

int ih(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int niilber(int n)
{
    int i, s = 0;

    for (i = 1; i <= n; i++)
        s = s + i;

    return s;
}
