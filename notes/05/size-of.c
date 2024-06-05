#include <stdio.h>

int main(void)
{
    int *p;

    // sizeof: size of the type of expression, not the values of the vars in the expression themselves.

    printf("%zu\n", sizeof(int));   // int: size of int (4)
    printf("%zu\n", sizeof p);      // p: size of int*  (8)
    printf("%zu\n", sizeof *p);     // *p: size of int  (4)

    return 0;
}
