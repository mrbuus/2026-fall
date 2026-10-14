/* Лаборатори №10 (тэмдэгт мөрийн даалгавар b)
   Өгөгдсөн кодыг шивж, блок бүрийн үүргийг тайлбарлав.
   Программ нь өгүүлбэрийн үгсийн дарааллыг урвуулж хэвлэнэ.
   Жишээ: "I love C" -> "C love I"
   gets() функц шинэ стандартад хасагдсан тул оронд нь fgets() ашиглав. */
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100 // тэмдэгт мөрийн хамгийн их урт

int main()
{
    char str[100], reverse[100];
    int len, i, index, wordStart, wordEnd;

    printf("Enter any string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') // fgets-ийн уншсан Enter-ийг арилгана
    {
        str[len - 1] = '\0';
        len--;
    }

    index = 0;
    // мөрийн төгсгөлөөс эхлэн үгсийг хайна
    wordStart = len - 1;
    wordEnd = len - 1;

    while (wordStart > 0)
    {
        // хоосон зай олдвол түүний араас wordEnd хүртэл нэг үг байна
        if (str[wordStart] == ' ')
        {
            // тэр үгийг reverse мөр рүү хуулна
            i = wordStart + 1;
            while (i <= wordEnd)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

    // хамгийн эхний үгийг (өмнө нь зай байхгүй) хуулна
    for (i = 0; i <= wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // шинэ мөрийн төгсгөлийг тэмдэглэнэ
    reverse[index] = '\0';

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s\n", reverse);

    return 0;
}
