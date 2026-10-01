/* Лаборатори №2, Даалгавар 3
   Натурал тоо M-ийн хүрдийг (M x 1 ... M x 10) хэвлэх.                */
#include <stdio.h>

int main(void)
{
    int M, i;

    printf("Натурал тоо M-ийг оруулна уу: ");
    if (scanf("%d", &M) != 1) { printf("Буруу өгөгдөл.\n"); return 1; }
    if (M < 1) { printf("M натурал тоо байх ёстой.\n"); return 1; }

    printf("\n--- %d-ийн хүрд ---\n", M);
    for (i = 1; i <= 10; i++)
        printf("%d x %2d = %d\n", M, i, M * i);

    return 0;
}
