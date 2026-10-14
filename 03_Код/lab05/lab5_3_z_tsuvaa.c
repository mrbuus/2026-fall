/* Лаборатори №5 (FOR давталтын бодлого 2)
   X тоо өгөгдсөн бол z = 1 + 3x/3! + 5x/5! + 7x/7! + ... + Mx/M!
   илэрхийллийн утгыг ол (M сондгой тоо). */
#include <stdio.h>

int main()
{
    int M, i, j;
    float x;
    double P, Z;

    printf("x = ");
    scanf("%f", &x);
    printf("M = ");
    scanf("%d", &M);

    Z = 1;
    for (i = 3; i <= M; i = i + 2)
    {
        P = 1;
        for (j = 1; j <= i; j++)
        {
            P = P * j;
        }
        Z = Z + (i * x) / P;
    }

    printf("Z = %f\n", Z);

    return 0;
}
