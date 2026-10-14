/* Лаборатори №13-2, Даалгавар 3
   Оюутны мэдээлэл (код, нэр, голч дүн) бүхий бүтэц төрөл тодорхойл.
   Гараас n оюутны мэдээллийг авч хамгийн өндөр голчтой оюутны мэдээллийг
   хэвлэ. */
#include <stdio.h>

#define MAX 50

struct Oyutan
{
    char kod[15];
    char ner[50];
    float golch;
};

int main()
{
    struct Oyutan oyutnuud[MAX];
    int n, i, ih;

    printf("Оюутны тоо n = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d-р оюутны код = ", i + 1);
        scanf("%s", oyutnuud[i].kod);
        printf("Нэр = ");
        scanf("%s", oyutnuud[i].ner);
        printf("Голч = ");
        scanf("%f", &oyutnuud[i].golch);
    }

    ih = 0;
    for (i = 1; i < n; i++)
    {
        if (oyutnuud[i].golch > oyutnuud[ih].golch)
            ih = i;
    }

    printf("\nХамгийн өндөр голчтой оюутан:\n");
    printf("Код: %s, Нэр: %s, Голч: %.2f\n", oyutnuud[ih].kod,
           oyutnuud[ih].ner, oyutnuud[ih].golch);

    return 0;
}
