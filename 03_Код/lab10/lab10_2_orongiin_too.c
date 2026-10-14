/* Лаборатори №10 (тэмдэгт мөрийн даалгавар a)
   Өгөгдсөн тоон утга хэдэн оронтой болохыг тэмдэгт мөр ашиглан тодорхойл. */
#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    char too[MAX_SIZE];
    int i, orongiin_too;

    printf("Тоо оруул: ");
    scanf("%s", too);

    orongiin_too = 0;
    for (i = 0; too[i] != '\0'; i++)
    {
        if (too[i] >= '0' && too[i] <= '9')
            orongiin_too++;
    }

    printf("%s тоо %d оронтой\n", too, orongiin_too);

    return 0;
}
