#include <stdio.h>

int main(void)
{
    FILE *fp;
    int x = 32;

    // fp = fopen("output.txt", "w");
    fp = stdout; // stdout is a file, so you can print output to there

    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fputs("Hello, world!\n", fp);

    fclose(fp);

    return 0;
}
