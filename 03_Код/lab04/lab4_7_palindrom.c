/* Лаборатори №4, Нэмэлт 4
   Тоо палиндром эсэхийг while давталтаар шалга. Палиндром тоо нь
   урвуулахад өөртэйгөө адил байдаг тоо (жишээ нь 12321). */
#include <stdio.h>

int main()
{
    int n, temp, urvuu;

    printf("Тоо оруул: ");
    scanf("%d", &n);

    urvuu = 0;
    temp = n;
    while (temp > 0)
    {
        urvuu = urvuu * 10 + temp % 10;
        temp = temp / 10;
    }

    if (n >= 0 && urvuu == n)
        printf("%d бол палиндром тоо\n", n);
    else
        printf("%d бол палиндром тоо биш\n", n);

    return 0;
}
