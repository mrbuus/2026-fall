/* Лаборатори №2, Даалгавар 1b
   Тэгш өнцөгт гурвалжны хоёр катет өгөгдсөн үед гипотенузыг олох.
   Пифагорын теорем:  c = sqrt(a*a + b*b)                              */
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("Хоёр катетыг оруулна уу (a b): ");
    if (scanf("%lf %lf", &a, &b) != 2) { printf("Буруу өгөгдөл.\n"); return 1; }

    if (a <= 0 || b <= 0) { printf("Катет эерэг байх ёстой.\n"); return 1; }

    c = sqrt(a * a + b * b);
    printf("Гипотенуз c = %.4f\n", c);
    return 0;
}
