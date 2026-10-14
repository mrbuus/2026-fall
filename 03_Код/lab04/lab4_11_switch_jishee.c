/* Лаборатори №4 (сонголтын бүтцийн бодлого 2)
   Өгөгдсөн switch операторын жишээг шивж үр дүнг харах.
   ch='b' тул "CaseB" хэвлэгдэнэ. */
#include <stdio.h>

int main()
{
    char ch = 'b';

    switch (ch)
    {
    case 'd':
        printf("CaseD ");
        break;
    case 'b':
        printf("CaseB");
        break;
    case 'c':
        printf("CaseC");
        break;
    case 'z':
        printf("CaseZ ");
        break;
    default:
        printf("Default ");
    }
    printf("\n");

    return 0;
}
