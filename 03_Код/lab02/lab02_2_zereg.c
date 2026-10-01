/* Лаборатори №2, Даалгавар 2
   m, n натурал тоо өгөгдсөн үед m^n (m-ийн n зэрэг)-ийг олох.
   Давталт ашиглан гараар үржүүлж байгаа тул pow() шаардлагагүй.      */
#include <stdio.h>

int main(void)
{
    long long m, n, i;
    long long ur = 1;                   /* үр дүн, эхлэл утга 1 */

    printf("m ба n натурал тоог оруулна уу (m n): ");
    if (scanf("%lld %lld", &m, &n) != 2) { printf("Буруу өгөгдөл.\n"); return 1; }

    if (m < 1 || n < 0) { printf("m >= 1, n >= 0 байх ёстой.\n"); return 1; }

    for (i = 1; i <= n; i++)
        ur = ur * m;                    /* n удаа m-ээр үржүүлнэ */

    printf("%lld ^ %lld = %lld\n", m, n, ur);
    return 0;
}
