#include <stdio.h>

// when you "pass" arrays to a function, you're only passing a pointer
// to the first element, and that's what ``size`` measures

void foo(int x[12])
{
    printf("%zu\n", sizeof x);      // returns int* (8)
    printf("%zu\n", sizeof(int));   // 4 bytes per int

    printf("%zu\n", sizeof x / sizeof(int)); // 8/4=2
                                             // (a very wrong number)
}

int main(void)
{
    // THIS ENTIRE METHOD ONLY WORKS YOU'RE MEASURING AN ARRAY
    // IN THE SCOPE THAT IT WAS DEFINED IN!
    int x[12];

    printf("%zu\n", sizeof x);      // 48 total bytes
    printf("%zu\n", sizeof(int));   // 4 bytes per int

    printf("%zu\n", sizeof x / sizeof(int)); // 48/4=12 
                                             // (our 12 initialized ints)

    return 0;
}
