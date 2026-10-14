/* Лаборатори №13-2, Даалгавар 2
   Барааны мэдээлэл (нэр, үнэ, тоо хэмжээ) бүхий бүтэц төрөл тодорхойлж,
   4 барааны мэдээлэл авах массив хувьсагч зарлан хэвлэх. */
#include <stdio.h>

struct Baraa
{
    char ner[50];
    float une;
    int too;
};

int main()
{
    struct Baraa baraa[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%d-р барааны нэр = ", i + 1);
        scanf("%s", baraa[i].ner);
        printf("Үнэ = ");
        scanf("%f", &baraa[i].une);
        printf("Тоо хэмжээ = ");
        scanf("%d", &baraa[i].too);
    }

    printf("\nНэр\tҮнэ\tТоо\n");
    for (i = 0; i < 4; i++)
    {
        printf("%s\t%.2f\t%d\n", baraa[i].ner, baraa[i].une, baraa[i].too);
    }

    return 0;
}
