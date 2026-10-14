/**
 * Лаборатори №11 (рекурсийн даалгавар b)
 * Өгөгдсөн кодыг шивж тайлбарлав: lowerLimit-ээс upperLimit хүртэлх
 * натурал тоонуудыг рекурсив функц ашиглан хэвлэнэ.
 */
#include <stdio.h>

/* рекурсив функцийн загвар */
void printNaturalNumbers(int lowerLimit, int upperLimit);

int main()
{
    int lowerLimit, upperLimit;

    /* хязгааруудыг гараас оруулна */
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("All natural numbers from %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);
    printf("\n");

    return 0;
}

void printNaturalNumbers(int lowerLimit, int upperLimit)
{
    /* рекурсийн зогсох нөхцөл: доод хязгаар дээдээсээ хэтэрвэл буцна */
    if (lowerLimit > upperLimit)
        return;

    printf("%d, ", lowerLimit);

    // дараагийн тоог хэвлэхийн тулд функц өөрийгөө дуудна
    printNaturalNumbers(lowerLimit + 1, upperLimit);
}
