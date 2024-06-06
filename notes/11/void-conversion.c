#include <stdio.h>

int main(void)
{
    char a = 'X';

    void *p = &a;
    char *q = p;

    // printf("%c\n", *p); // cannot dereference a void
    printf("%c\n", *q); // prints "X"

    return 0;
}
