#include <stdio.h>
#include <stdlib.h>

char *readline(FILE *fp)
{
    int     offset  = 0; // index next char goes into buffer
    int     bufsize = 4; // preferably power of 2 of init-size
    char    *buf;        // the buffer
    int     c;           // the char we've read in

    buf = malloc(bufsize); // allocate initial buffer

    if (buf == NULL)
        return NULL;

    // main loop; read until newline or EOF
    while (c = fgetc(fp), c != '\n' && c != EOF) {
        if (offset == bufsize-1) {  // -1 for NUL terminator
            bufsize *= 2;   // 2x the space

            char *new_buf = realloc(buf, bufsize);

            if (new_buf == NULL) {
                free(buf);  // on error, free memory and bail
                return NULL;
            }
            buf = new_buf;  // successful realloc
        }
        buf[offset++] = c; // add the byte onto the buffer
    }
    
    // we've now hit a newline or EOF...
    
    // if at EOF and we read no bytes, free the buffer and return NULL to indicate we're at EOF
    if (c == EOF && offset == 0) {
        free(buf);
        return NULL;
    }

    // shrink to fit
    if (offset < bufsize-1) {   // if we're short of the end
        char *new_buf = realloc(buf, offset+1); // +1 for NUL terminator

        // if successful, we point buf to new_buf
        if (new_buf != NULL) {
            buf = new_buf;
        }
    }

    // add NUL terminator
    buf[offset] = '\0';

    return buf;
}

int main(void)
{
    FILE *fp = fopen("foo.txt", "r");

    char *line;

    while ((line = readline(fp)) != NULL) {
        printf("%s\n", line);
        free(line);
    }

    fclose(fp);

    return 0;
}
