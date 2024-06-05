#include <stdio.h>

int main(void)
{
    //  generally, when a C programmer talks about a pointer to an array:
    //      they're talking about a pointer to the "first element" of the array
    int a[5] = {11, 22, 33, 44, 55};
    int *p;

    p = &a[0];
    // you can write:
    //      p = &a[0];
    // OR
    //      p = a;
    // and both mean the same (the latter being shorthand)

    printf("%d\n", *p);

    return 0;
}
