#include <stdio.h>

int main(void)
{
    int a[] = {11, 22, 33, 44, 55};
    int *p = a;

    for (int i = 0; i < 5; i++)
        printf("%d\n", a[i]);       // array notation with a

    for (int i = 0; i < 5; i++)
        printf("%d\n", p[i]);       // array notation with p


    for (int i = 0; i < 5; i++)
        printf("%d\n", *(a + i));   // ptr notation with a

    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p + i));   // ptr notation with p

    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p++));     // moving ptr p
        //printf("%d\n", *(a++));   // moving array variable a--ERR

    return 0;
}

// You can modify a pointer to point to a different address, but you can't do that with an array variable!
