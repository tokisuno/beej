#include <stdio.h>

int main(void)
{
    int a[5] = {11, 22, 33, 44, 55};

    int *p = a;

    printf("%d\n", *p);         // points to a[0]   (11)
    printf("%d\n", *(p + 1));   // points to a[0+1] (22)

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));   // same as p[i]
    }

    return 0;
}
