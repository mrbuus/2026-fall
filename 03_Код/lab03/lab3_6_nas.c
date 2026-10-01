#include <stdio.h>

int main()
{
    int nas;

    printf("Насаа оруул: ");
    scanf("%d", &nas);

    if (nas < 20)
        printf("Өсвөр нас\n");
    else if (nas < 40)
        printf("Залуу нас\n");
    else
        printf("Ахимаг нас\n");

    return 0;
}
