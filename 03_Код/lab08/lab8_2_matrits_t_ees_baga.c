/* Лаборатори №8 (8-2 даалгавар)
   A[3][3] хоёр хэмжээст массивын элементүүдээс өгөгдсөн тоо T-ээс бага
   утгыг дэлгэцэнд хэвлэх. */
#include <stdio.h>

int main()
{
    int A[3][3];
    int i, j, T;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("T = ");
    scanf("%d", &T);

    printf("\nМатриц:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }

    printf("\nT-ээс бага элементүүд:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (A[i][j] < T)
                printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }

    return 0;
}
