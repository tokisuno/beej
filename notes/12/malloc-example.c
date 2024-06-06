#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // allocating space for 10 ints
    int *p = malloc(sizeof(int) * 10);

    // assign them values 0-45
    for (int i = 0; i < 10; i++) {
        p[i] = i * 5;
    }

    // print the array
    for (int i = 0; i < 10; i++) {
        printf("%d\n", p[i]);
    }

    // free memory
    free(p);

    return 0;
}
