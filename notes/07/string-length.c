#include <stdio.h>
#include <string.h>

// C doesn't track this for you, but you can use the header file string.h in order to import the strlen() function
int main(void)
{
    char *s = "Hello, world!";

    printf("The string is %zu bytes long.\n", strlen(s));

    return 0;
}
