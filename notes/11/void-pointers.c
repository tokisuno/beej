#include <stdio.h>
#include <string.h>

int main(void)
{
    // Copying strings
    char s[] = "Goats!";
    char t[100];

    memcpy(t, s, 7); // copy 7 bytes (including NUL terminator)

    printf("%s\n", t);

    // Copying ints
    int a[] = {11, 22, 33};
    int b[3];

    memcpy(b, a, 3 * sizeof(int)); // copy 3 ints of data
    
    printf("%d\n", b[1]); // got second int in array!

    return 0;
}

// * memcpy takes void as an argument since it doesn't know what datatype is going to be passed into it.
// * we pass each thing we're going to happen, and we have to specify how many bytes to copy.
// * if we didn't use void*, we'd have to declare a different function for each datatype which can get very bloated
// * you cannot do pointer arithmetic on a void*
// * you cannot dereference a void*
// * you cannot use the arrow operator on void* since it's also a reference
// * you cannot use array notation on void* since it's also a dereference


