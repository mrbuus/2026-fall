#include <stdio.h>

int main()
{
    int n, zuu, arav, negj;

    printf("3 оронтой тоо оруул: ");
    scanf("%d", &n);

    if (n < 100 || n > 999)
    {
        printf("Энэ тоо 3 оронтой биш байна!\n");
        return 0;
    }

    zuu  = n / 100;
    arav = n / 10 % 10;
    negj = n % 10;

    printf("Зууны орон  = %d\n", zuu);
    printf("Аравтын орон = %d\n", arav);
    printf("Нэгжийн орон = %d\n", negj);

    return 0;
}
