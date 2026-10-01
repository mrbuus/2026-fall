/* Лаборатори №2, Даалгавар 4
   Тэгш өнцөгтийн талбай ба периметрийг олох.
   S = a*b,   P = 2*(a+b)                                              */
#include <stdio.h>

int main(void)
{
    double a, b;

    printf("Тэгш өнцөгтийн 2 талыг оруулна уу (a b): ");
    if (scanf("%lf %lf", &a, &b) != 2) { printf("Буруу өгөгдөл.\n"); return 1; }
    if (a <= 0 || b <= 0) { printf("Тал эерэг байх ёстой.\n"); return 1; }

    printf("Талбай   S = %.4f\n", a * b);
    printf("Периметр P = %.4f\n", 2 * (a + b));
    return 0;
}
