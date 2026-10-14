/* Лаборатори №4, Даалгавар 1
   n натурал тоо өгөгдсөн бол түүний эхний цифрийг ол. */
#include <stdio.h>

int main()
{
    int n;

    printf("n натурал тоо оруул: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Натурал тоо оруулна уу!\n");
        return 0;
    }

    while (n >= 10)
    {
        n = n / 10;
    }

    printf("Эхний цифр = %d\n", n);

    return 0;
}
