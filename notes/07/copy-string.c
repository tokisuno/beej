#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Hello, world!";
    char t[100];

    strcpy(t, s); // make copy t <-- s
    
    t[0] = 'z';

    // s remains unaffected because it's a different string
    printf("%s\n", s);

    // t has been changed since it's a copy of s
    printf("%s\n", t);

    return 0;
}
