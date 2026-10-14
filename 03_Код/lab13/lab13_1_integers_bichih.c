/* Лаборатори №13 (жишээ программ)
   Гараас оруулсан сөрөг биш бүхэл тоонуудыг integers.dat хоёртын файлд
   бичих. -1 оруулахад дуусна. Даалгаврын программд энэ файл хэрэгтэй. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fout = fopen("integers.dat", "wb");
    int i;

    printf("Тоонуудаа оруул (-1 бол дуусна): ");
    scanf("%d", &i);
    while (i != -1)
    {
        fwrite(&i, sizeof(int), 1, fout);
        scanf("%d", &i);
    }

    fclose(fout);

    return 0;
}
