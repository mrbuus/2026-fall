/* Бодлого 11 в)
   x, y, z тоонууд өгөгдөв.
   a = (1 + y) * (x + y/(x^2 + 4)) / (e^(-x-2) + 1/(x^2 + 4)),
   b = (1 + cos(y - 2)) / (x^4/2 + sin^2 z)
   утгуудыг ол. */
#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z, a, b, huvaari;

    printf("x, y, z тоонуудыг оруул: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    a = (1 + y) * (x + y / (x * x + 4)) / (exp(-x - 2) + 1 / (x * x + 4));

    /* b-ийн хуваарь. x = 0 ба sin z = 0 үед тэг болно */
    huvaari = pow(x, 4) / 2 + sin(z) * sin(z);

    if (huvaari == 0)
    {
        printf("a = %.4f\n", a);
        printf("b-ийн хуваарь 0 тул b тодорхойлогдохгүй\n");
    }
    else
    {
        b = (1 + cos(y - 2)) / huvaari;
        printf("a = %.4f\n", a);
        printf("b = %.4f\n", b);
    }

    return 0;
}
