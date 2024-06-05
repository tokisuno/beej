#include <stdio.h>

int main(void)
{
    int i;
    int *p;

    p = &i;

    i = 10;     // i is now 10; 
    *p = 20;    // pointer p (i) is now 20

    printf("i is: %d\n", i);    // prints 20
    printf("i is: %d\n", *p);   // prints 20
                                // dereference p == i

    return 0;
}
