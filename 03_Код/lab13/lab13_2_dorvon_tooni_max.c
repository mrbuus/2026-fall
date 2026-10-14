/* Лаборатори №13, Даалгавар
   integers.dat файлд байгаа тоонуудаас эхний дөрвөн тооны хамгийн ихийг,
   дараагийн дөрвөн тооны хамгийн ихийг гэх мэтээр олж max.txt файлд бич.
   Сүүлд дөрвөөс цөөн тоо үлдвэл тэдгээрийн хамгийн ихийг бичнэ.
   Жишээ: 93 765 17 20 945 82 35 76 43 -> 765 945 43
   (Эхлээд lab13_1_integers_bichih.c-г ажиллуулж файлаа үүсгэнэ.) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fin, *fout;
    int a, max, too;

    fin = fopen("integers.dat", "rb");
    if (fin == NULL)
    {
        printf("integers.dat файл олдсонгүй.\n");
        return 1;
    }
    fout = fopen("max.txt", "w");

    too = 0;
    max = 0;
    while (fread(&a, sizeof(int), 1, fin) == 1)
    {
        if (too == 0 || a > max)
            max = a;
        too++;

        if (too == 4)
        {
            fprintf(fout, "%d ", max);
            too = 0;
        }
    }

    /* дөрвөөс цөөн тоо үлдсэн бол */
    if (too > 0)
        fprintf(fout, "%d ", max);

    fclose(fin);
    fclose(fout);

    printf("max.txt файлд бичлээ.\n");

    return 0;
}
