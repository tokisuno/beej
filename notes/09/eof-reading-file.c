#include <stdio.h>

// reads the file char by char

int main(void)
{
    FILE *fp;
    int c;

    fp = fopen("hello.txt", "r");

    while ( (c = fgetc(fp)) != EOF ) {
        printf("%c", c);
    }
    fclose(fp);

    return 0;
}
