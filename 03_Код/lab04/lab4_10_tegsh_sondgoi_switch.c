/* Лаборатори №4 (сонголтын бүтцийн бодлого 1)
   R бүхэл тоо тэгш бол y = R^2, сондгой бол y = R + 1/R^2
   илэрхийллийн утгыг switch ашиглан хэвлэ. */
#include <stdio.h>

int main()
{
    int R;
    float y;

    printf("R = ");
    scanf("%d", &R);

    switch (R % 2)
    {
    case 0:
        y = R * R;
        printf("R тэгш тоо, y = R^2 = %.4f\n", y);
        break;
    default:
        y = R + 1.0 / (R * R);
        printf("R сондгой тоо, y = R + 1/R^2 = %.4f\n", y);
        break;
    }

    return 0;
}
