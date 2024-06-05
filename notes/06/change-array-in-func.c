#include <stdio.h>

void double_array(int *a, int len) 
{
    for (int i = 0; i < len; i++) {
        a[i] *= 2;
    }
}

// When you pass an array through a function, you're passing a pointer to the first element of the array.
// If the function has a pointer to the data, it is able to manipulate the data!

int main(void)
{
    int x[5] = {1, 2, 3, 4, 5};

    double_array(x, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", x[i]);
    }

    return 0;
}
