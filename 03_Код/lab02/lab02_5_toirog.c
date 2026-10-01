/* Лаборатори №2, Даалгавар 5
   Тойргийн талбайг олох.  S = pi * r^2,  урт L = 2*pi*r               */
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void)
{
    double r;

    printf("Тойргийн радиусыг оруулна уу: ");
    if (scanf("%lf", &r) != 1) { printf("Буруу өгөгдөл.\n"); return 1; }
    if (r <= 0) { printf("Радиус эерэг байх ёстой.\n"); return 1; }

    printf("Талбай S = %.4f\n", PI * r * r);
    printf("Урт    L = %.4f\n", 2 * PI * r);
    return 0;
}
