#include <stdio.h>

int main(void)
{
    int i = 10;

    printf("The value of i is: %d\n", i);
    printf("Its memory address is: %p\n", (void *)&i);

    return 0;
}
