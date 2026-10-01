#include <stdio.h>

int main()
{
    float a, b, c, max;

    printf("a, b, c гурван тоо оруул: ");
    scanf("%f %f %f", &a, &b, &c);

    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("Хамгийн их тоо = %.2f\n", max);

    return 0;
}
