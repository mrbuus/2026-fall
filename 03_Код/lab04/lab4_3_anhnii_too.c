/* Лаборатори №4, Даалгавар 3
   Хэрэглэгчээс тоо авч анхны тоо мөн эсэхийг while давталтаар шалга. */
#include <stdio.h>

int main()
{
    int n, i, anhnii;

    printf("Тоо оруул: ");
    scanf("%d", &n);

    if (n < 2)
        anhnii = 0;
    else
        anhnii = 1;

    i = 2;
    while (i * i <= n && anhnii == 1)
    {
        if (n % i == 0)
            anhnii = 0;
        i++;
    }

    if (anhnii == 1)
        printf("%d бол анхны тоо\n", n);
    else
        printf("%d бол анхны тоо биш\n", n);

    return 0;
}
