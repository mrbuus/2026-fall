/* Лаборатори №13-2, Даалгавар 1b
   Бүтэц төрлийн заагч хувьсагч зарлаж, гараас 2 оюутны мэдээллийг оруулж
   хэвлэх. */
#include <stdio.h>

struct Oyutan
{
    char ner[50];
    int nas;
    char huis[20];
    char tenhim[60];
};

int main()
{
    struct Oyutan oyutnuud[2];
    struct Oyutan *p;
    int i;

    p = oyutnuud;
    for (i = 0; i < 2; i++)
    {
        printf("%d-р оюутан\n", i + 1);
        printf("Нэр = ");
        scanf("%s", (p + i)->ner);
        printf("Нас = ");
        scanf("%d", &(p + i)->nas);
        printf("Хүйс = ");
        scanf("%s", (p + i)->huis);
        printf("Тэнхим = ");
        scanf("%s", (p + i)->tenhim);
    }

    printf("\n");
    for (i = 0; i < 2; i++)
    {
        printf("%s\t%d\t%s\t%s\n", (p + i)->ner, (p + i)->nas,
               (p + i)->huis, (p + i)->tenhim);
    }

    return 0;
}
