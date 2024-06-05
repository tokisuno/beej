#include <stdio.h>

int main(void)
{
    int x = 2;
    printf("The number %d is %s.\n", x, x % 2 == 0 ? "even" : "odd");

    return 0;
}
