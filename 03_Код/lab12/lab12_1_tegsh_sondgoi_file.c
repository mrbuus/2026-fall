/* Лаборатори №12, Даалгавар
   input.txt файлд байгаа бүхэл тоонуудаас тэгш тоонуудыг нь even.txt,
   сондгой тоонуудыг нь odd.txt файлд анх байсан дарааллаар нь бич.
   Жишээ: 93 765 17 20 945 82 35 76 43 ->
          even.txt: 20 82 76,  odd.txt: 93 765 17 945 35 43 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *feven, *fodd;
    int a;

    fin = fopen("input.txt", "r");
    if (fin == NULL)
    {
        printf("input.txt файлыг нээж чадсангүй.\n");
        return 1;
    }

    feven = fopen("even.txt", "w");
    fodd = fopen("odd.txt", "w");

    while (fscanf(fin, "%d", &a) == 1)
    {
        if (a % 2 == 0)
            fprintf(feven, "%d ", a);
        else
            fprintf(fodd, "%d ", a);
    }

    fclose(fin);
    fclose(feven);
    fclose(fodd);

    printf("even.txt, odd.txt файлуудад бичлээ.\n");

    return 0;
}
