/* Лаборатори №6 (функцийн бодлого 2)
   Хичээл №5-ын 2 дахь бодлого буюу
   z = 1 + 3x/3! + 5x/5! + ... + Mx/M!  утгыг функц ашиглан бод. */
#include <stdio.h>

double faktorial(int k);
double z_utga(float x, int M);

int main()
{
    int M;
    float x;

    printf("x = ");
    scanf("%f", &x);
    printf("M = ");
    scanf("%d", &M);

    printf("Z = %f\n", z_utga(x, M));

    return 0;
}

double faktorial(int k)
{
    int i;
    double f = 1;

    for (i = 1; i <= k; i++)
        f = f * i;

    return f;
}

double z_utga(float x, int M)
{
    int i;
    double z = 1;

    for (i = 3; i <= M; i = i + 2)
        z = z + (i * x) / faktorial(i);

    return z;
}
