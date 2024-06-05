#include <stdio.h>

int main(void)
{
    FILE *fp;
    unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("output.bin", "wb"); // wb = write binary

    //  function args:
    //      * pointer to the data to write
    //      * size of each "piece" of data
    //      * count of each "piece" of data
    //      * FILE*
    fwrite(bytes, sizeof(char), 6, fp);

    fclose(fp);

    return 0;
}
