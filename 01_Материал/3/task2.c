#include <stdio.h>

int main()
{
    int a;

    printf("Нэг бүхэл тоо оруул: ");
    scanf("%d", &a);

    if (a > 0)
        printf("Энэ тоо эерэг\n");
    else if (a < 0)
        printf("Энэ тоо сөрөг\n");
    else
        printf("Энэ тоо тэг\n");

    if (a % 2 == 0)
        printf("Энэ тоо тэгш тоо\n");
    else
        printf("Энэ тоо сондгой тоо\n");

    return 0;
}
