#include <stdio.h>

int main()
{
    int K, niilber, urvuu, temp;

    printf("K тоо оруул: ");
    scanf("%d", &K);

    if (K >= 10 && K <= 99)
    {
        niilber = K / 10 + K % 10;
        printf("Цифрүүдийн нийлбэр = %d\n", niilber);
    }
    else
    {
        urvuu = 0;
        temp = K;
        while (temp > 0)
        {
            urvuu = urvuu * 10 + temp % 10;
            temp = temp / 10;
        }
        printf("Урвуу утга = %d\n", urvuu);
    }

    return 0;
}
