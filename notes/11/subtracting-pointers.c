#include <stdio.h>

int my_strlen(char *s) 
{
    // start scanning from beginning of string
    char *p = s;
    
    // scan until we find NUL char
    while (*p != '\0') {
        p++;
    }

    return p - s;
    // you can only use pointer-subtraction between two pointers that point to the same array
}

int main(void)
{
    printf("%d\n", my_strlen("Hello, world!")); // prints 13
                                                // "Hello, world!" is char* ...
                                                // making it a string literal!

    return 0;
}
