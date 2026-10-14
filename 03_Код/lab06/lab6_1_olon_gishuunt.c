/* Лаборатори №6, Даалгавар
   a0, ..., a6 бодит тоонууд өгөгдөв.
   p(y) = a6*y^6 + a5*y^5 + ... + a0 бол x-ийн 1, 3, 4 гэсэн гурван утгын
   хувьд p(x+1) - p(x) илэрхийллийн утгыг ол. */
#include <stdio.h>

double p(double a[], double y);

int main()
{
    double a[7];
    int i;

    for (i = 0; i <= 6; i++)
    {
        printf("a%d = ", i);
        scanf("%lf", &a[i]);
    }

    printf("x=1 үед p(x+1)-p(x) = %.3f\n", p(a, 2) - p(a, 1));
    printf("x=3 үед p(x+1)-p(x) = %.3f\n", p(a, 4) - p(a, 3));
    printf("x=4 үед p(x+1)-p(x) = %.3f\n", p(a, 5) - p(a, 4));

    return 0;
}

/* олон гишүүнтийн y цэг дээрх утгыг буцаана */
double p(double a[], double y)
{
    double s = 0, zereg = 1;
    int i;

    for (i = 0; i <= 6; i++)
    {
        s = s + a[i] * zereg;
        zereg = zereg * y;
    }

    return s;
}
