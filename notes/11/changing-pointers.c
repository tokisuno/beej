#include <stdio.h>

int main(void)
{
    int a[] = {11, 22, 33, 44, 55, 999};
    int *p = a;

    while (*p != 999) { // while the thing p points to isn't 999...
        printf("%d\n", *p); // print it...
        p++;    // move p to point to the next int !
    }

    return 0;
}
