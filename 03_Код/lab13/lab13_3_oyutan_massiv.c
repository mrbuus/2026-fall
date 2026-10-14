/* Лаборатори №13-2, Даалгавар 1a
   Бүтэц төрөл ашиглан оюутны мэдээлэл (нэр, нас, хүйс, тэнхим) бүртгэх.
   Бүтцийн массив зарлах үед нь 3 оюутны мэдээллийг олгож хэвлэх. */
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
    struct Oyutan oyutnuud[3] = {
        {"Бат", 19, "эр", "Компьютерийн ухаан"},
        {"Сараа", 18, "эм", "Мэдээллийн технологи"},
        {"Тэмүүлэн", 20, "эр", "Програм хангамж"}
    };
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("%s\t%d\t%s\t%s\n", oyutnuud[i].ner, oyutnuud[i].nas,
               oyutnuud[i].huis, oyutnuud[i].tenhim);
    }

    return 0;
}
