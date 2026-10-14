/* Лаборатори №1, Даалгавар 3
   x бүхэл тоог гараас оруулаад 100-д хуваасан утгыг M-д олгож хэвлэх. */
#include <stdio.h>

int main()
{
    int x;
    float M;

    printf("x = ");
    scanf("%d", &x);

    M = x / 100.0;

    printf("M = %.2f\n", M);

    return 0;
}
