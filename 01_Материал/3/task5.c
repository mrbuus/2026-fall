#include <stdio.h>

int main()
{
    float a, b, c, D;

    printf("a, b, c коэффициент оруул: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("a = 0 тул квадрат тэгшитгэл биш\n");
        return 0;
    }

    D = b * b - 4 * a * c;

    printf("D = %.2f\n", D);

    if (D > 0)
        printf("Тэгшитгэл 2 бодит шийдтэй\n");
    else if (D == 0)
        printf("Тэгшитгэл 1 бодит шийдтэй\n");
    else
        printf("Тэгшитгэл бодит шийдгүй\n");

    return 0;
}
