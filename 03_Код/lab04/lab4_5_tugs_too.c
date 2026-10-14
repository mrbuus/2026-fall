/* Лаборатори №4, Нэмэлт 2
   Тоо төгс тоо мөн эсэхийг шалга. Төгс тоо нь өөрөөсөө бусад бүх
   хуваагчийнхаа нийлбэртэй тэнцүү тоо (жишээ нь 6 = 1+2+3). */
#include <stdio.h>

int main()
{
    int n, i, niilber;

    printf("Тоо оруул: ");
    scanf("%d", &n);

    niilber = 0;
    i = 1;
    while (i < n)
    {
        if (n % i == 0)
            niilber = niilber + i;
        i++;
    }

    if (n > 0 && niilber == n)
        printf("%d бол төгс тоо\n", n);
    else
        printf("%d бол төгс тоо биш\n", n);

    return 0;
}
