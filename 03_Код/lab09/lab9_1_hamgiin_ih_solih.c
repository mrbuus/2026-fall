/* Лаборатори №9, Даалгавар
   n, a1, ..., an, m, b1, ..., bm, k бүхэл тоонууд өгөгдөв.
   a дараалалд бүх гишүүнээсээ бага биш утгатай (хамгийн их) эхний элементийн
   утгыг k-гаар соль. Мөн ийм дүрмээр 10 гэсэн утгын хувьд b дарааллыг өөрчил. */
#include <stdio.h>

#define S 100

void readElements(int *len, int *mas);
void changeMax(int len, int *mas, int k);
void printElements(int len, int *mas);

int main()
{
    int a[S], b[S];
    int n, m, k;

    printf("a дараалал\n");
    readElements(&n, a);
    printf("b дараалал\n");
    readElements(&m, b);

    printf("k = ");
    scanf("%d", &k);

    changeMax(n, a, k);
    changeMax(m, b, 10);

    printf("Өөрчилсөн a: ");
    printElements(n, a);
    printf("Өөрчилсөн b: ");
    printElements(m, b);

    return 0;
}

void readElements(int *len, int *mas)
{
    int i;

    printf("Хэмжээ: ");
    scanf("%d", len);
    for (i = 0; i < *len; i++)
        scanf("%d", mas + i);
}

/* хамгийн их утгатай элементийн хамгийн эхнийхийг k болгоно */
void changeMax(int len, int *mas, int k)
{
    int max = mas[0];
    int maxIndex = 0, i;

    for (i = 1; i < len; i++)
    {
        if (max < mas[i])
        {
            max = mas[i];
            maxIndex = i;
        }
    }

    mas[maxIndex] = k;
}

void printElements(int len, int *mas)
{
    int i;

    for (i = 0; i < len; i++)
        printf("%d ", mas[i]);
    printf("\n");
}
