#include <stdio.h>

int main(void)
{
    int a = 999;

    // sizeof = size in bytes of the expression's TYPE    
    // NOT the size of the expression itself

    printf("%zu\n", sizeof a);          // 4
    printf("%zu\n", sizeof(2 + 7));     // 4
    printf("%zu\n", sizeof 3.14);       // 8

    return 0;
}
