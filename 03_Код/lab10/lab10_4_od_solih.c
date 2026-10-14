/* Лаборатори №10, Даалгавар
   s тэмдэгт мөр өгөгдөв. Тэмдэгт мөрийн дотор дараалсан * байгаа бол
   тэдгээрийг 1, 2, 3, ... болгон соль. Жишээ: "ab***c*d" -> "ab123c1d".
   * байхгүй бол тэмдэгт мөрийг хэвээр нь хэвлэнэ. */
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char s[MAX_SIZE];
    int i, len, dugaar;

    printf("Тэмдэгт мөр оруул: ");
    fgets(s, MAX_SIZE, stdin);

    len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
        len--;
    }

    dugaar = 0;
    for (i = 0; i < len; i++)
    {
        if (s[i] == '*')
        {
            dugaar++;
            /* 9-өөс олон од дараалвал дахин 1-ээс эхэлнэ */
            if (dugaar > 9)
                dugaar = 1;
            s[i] = '0' + dugaar;
        }
        else
        {
            dugaar = 0;
        }
    }

    printf("%s\n", s);

    return 0;
}
