#include <stdio.h>

int main(void)
{
    FILE *fp;
    char s[1024];
    int linecount = 0;

    fp = fopen("quote.txt", "r");

    // left-associative ++ so the linecount makes sense to humans
    while (fgets(s, sizeof s, fp) != NULL) {
        printf("%d: %s", ++linecount, s);
    }

    fclose(fp);

    return 0;
}
