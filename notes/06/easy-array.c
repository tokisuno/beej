#include <stdio.h>

int main(void)
{
    int i;

                //  array sizes must be fixed
    float f[4]; //  * declares arr of 4 floats
    
    f[0] = 3.14159; //  0 indexing xd
    f[1] = 1.41421;
    f[2] = 1.61803;
    f[3] = 2.71828;

    for (i = 0; i < 4; i++) {
        printf("%f\n", f[i]);
    }

    return 0;
}
