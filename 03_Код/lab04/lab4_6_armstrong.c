/* Лаборатори №4, Нэмэлт 3
   Тоо Armstrong мөн эсэхийг шалга. Armstrong тоо нь цифр бүрийнхээ
   (оронгийн тоо)-зэргийн нийлбэртэй тэнцүү тоо (жишээ нь 153 = 1+125+27). */
#include <stdio.h>

int main()
{
    int n, temp, orongiin_too, tsifr, zereg, i, niilber;

    printf("Тоо оруул: ");
    scanf("%d", &n);

    /* эхлээд хэдэн оронтойг тоолно */
    orongiin_too = 0;
    temp = n;
    while (temp > 0)
    {
        orongiin_too++;
        temp = temp / 10;
    }

    /* цифр бүрийг оронгийн тоогоор зэрэг дэвшүүлж нэмнэ */
    niilber = 0;
    temp = n;
    while (temp > 0)
    {
        tsifr = temp % 10;

        zereg = 1;
        i = 1;
        while (i <= orongiin_too)
        {
            zereg = zereg * tsifr;
            i++;
        }

        niilber = niilber + zereg;
        temp = temp / 10;
    }

    if (n > 0 && niilber == n)
        printf("%d бол Armstrong тоо\n", n);
    else
        printf("%d бол Armstrong тоо биш\n", n);

    return 0;
}
