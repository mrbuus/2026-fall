#include <stdio.h>

int main()
{
    int onoo;

    printf("Шалгалтын оноо оруул: ");
    scanf("%d", &onoo);

    if (onoo >= 90 && onoo <= 100)
        printf("Дүн: A\n");
    else if (onoo >= 80 && onoo < 90)
        printf("Дүн: B\n");
    else if (onoo >= 70 && onoo < 80)
        printf("Дүн: C\n");
    else if (onoo >= 60 && onoo < 70)
        printf("Дүн: D\n");
    else
        printf("Дүн: F\n");

    return 0;
}
