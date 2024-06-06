#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // allocate space for 20 floats
    float *p = malloc(sizeof *p * 20);

    // assign them all fractional values 0.0-1.0
    for (int i = 0; i < 20; i++)
        p[i] = i / 20.0;

    // fuck nvm i want 40 elements instead
    float *new_p = realloc(p, sizeof *p * 40);

    // check if we successfully reallocated
    if (new_p == NULL) {
        printf("Error reallocating\n");
        return 1;
    }

    // if we did, reassign p
    p = new_p;

    for (int i = 20; i < 40; i++)
        p[i] = 1.0 + (i - 20) / 20.0;

    // print all values from float array
    for (int i = 0; i < 40; i++)
        printf("%f\n", p[i]);

    // free memory
    free(p);

    return 0;
}
