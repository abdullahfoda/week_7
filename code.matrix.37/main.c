
#include <stdio.h>
#define SIZE 2

int main()
{
    int arr1[SIZE][SIZE];
    int row, col;
    long det;

    printf("Enter elements in matrix of size 2x2: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &arr1[row][col]);
        }
    }

    det = (arr1[0][0] * arr1[1][1]) - (arr1[0][1] * arr1[1][0]);

    printf("Determinant of matrix A = %ld", det);

    return 0;
}
