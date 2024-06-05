#include <stdio.h>

int main(void)
{
    int row, col;

    int a[2][5] = {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9}
    };

    // int a[2][5] = 2d array of 2 rows and 5 columns!
    for (row = 0; row < 2; row++) {
        for (col = 0; col < 5; col++) {
            printf("(%d,%d), = %d\n", row, col, a[row][col]);
        }
    }

    printf("\n");

    int row3d, col3d;
    int b[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
    for (row3d = 0; row3d< 3; row3d++) {
        for (col3d = 0; col3d < 3; col3d++) {
            printf("(%d,%d), = %d\n", row3d, col3d, b[row3d][col3d]);
        }
    }
    
    return 0;
}
