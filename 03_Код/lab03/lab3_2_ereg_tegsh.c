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
        printf("Энэ тоо тэгш\n");
    else
        printf("Энэ тоо сондгой\n");

    return 0;
}
