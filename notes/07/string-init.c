#include <stdio.h>

int main(void)
{
    // if you have a pointer to a string litera, don't try and change it!

    char *s = "Hello, world!";  // string literal
    // s[0] = 'z' <-- invalid behaviour
    // tried to mutate a string literal!

    char t[] = "Hello, again!"; // array copy of string
    t[0] = 'z';
    // this is a mutable copy of a string
    // so we can change this freely

    printf("%s\n", t);

    return 0;
}
