#include <stdio.h>

int main(void)
{
    // you cannot have more array values than what is initialized
    // BUT... you can have less 
    int i;
    int j;
    int a[5] = {22, 37, 3490, 18, 95};

    for (i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }


    // You can also init the size of the array by defining the array without including the size
    
    int b[] = {420, 69, 123};   //  array with size of 3

    for (j = 0; j < 5; j++) {
        printf("%d\n", a[j]);
    }

    return 0;
}
