#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("hello.txt", "r");   // variable to represent open file

    int c = fgetc(fp);  // read a single char
    printf("%c\n", c);  // print char to stdout

    fclose(fp); // close the file when done

    return 0;
}
