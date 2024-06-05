#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool x = true;

    int i;
    i = 2;

    float f;
    f = 3.14;

    char *s = "Hello, world!";

    printf("%s i = %d and f = %f!\n", s, i, f);

    if (x)
        printf("x is true!\n");

    return 0;
}
