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
    // when a function accepts (char *s), then either types of strings
    // can be passed through into the function!
    char s[] = "Antelopes";
    char *t = "Wombats";

    printf("%d\n", my_strlen(s));
    printf("%d\n", my_strlen(t));

    return 0;
}
