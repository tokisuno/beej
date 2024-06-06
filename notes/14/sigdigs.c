#include <stdio.h>
#include <float.h>

int main(void)
{
    float f = 3.14159f;
    float g = 0.00000265358f;

    printf("%.5f\n", f);    // gets the right output
    printf("%.11f\n", g);   // gets the right output

    f += g;
    
    // this goes over the amount of sigdigs the float can return accurately.
    printf("%.11f\n", f);   // gets the wrong output

    return 0;
}
