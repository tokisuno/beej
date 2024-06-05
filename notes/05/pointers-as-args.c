#include <stdio.h>

void increment(int *p)
{
    *p = *p + 1;
}

int main(void)
{
    int i = 10;
    int *j = &i;

    printf("i is %d\n", i);
    printf("i is also %d\n", *j);

    increment(j); // modifies the pointer which in turn modifies
                  // the memory stored at value "i"

    printf("i is %d\n", i);

    return 0;
}
