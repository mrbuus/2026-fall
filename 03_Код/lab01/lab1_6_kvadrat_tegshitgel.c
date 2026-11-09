/* Лаборатори №1-2, Даалгавар 3
   a*x^2 + b*x + c = 0 квадрат тэгшитгэлийг бодох. */
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, x1, x2;

    printf("a, b, c коэффициент оруул: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("a = 0 тул квадрат тэгшитгэл биш\n");
        return 0;
    }

    D = b * b - 4 * a * c;

    if (D < 0)
        printf("D = %.2f < 0 тул бодит шийдгүй\n", D);
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        printf("Нэг шийдтэй: x = %.2f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Хоёр шийдтэй: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    return 0;
}
