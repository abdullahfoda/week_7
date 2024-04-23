/**
 * C program to find difference of two matrices of size 3x3
 */

#include <stdio.h>

#define SIZE 3

int main()
{
    int arr1[SIZE][SIZE];
    int arr2[SIZE][SIZE];
    int arr3[SIZE][SIZE];

    int row, col;

    printf("Enter elements in matrix A of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &arr1[row][col]);
        }
    }


    printf("\nEnter elements in matrix B of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &arr2[row][col]);
        }
    }


    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {

            arr3[row][col] = arr1[row][col] - arr2[row][col];
        }
    }

    printf("Difference of two matrices arr1-arr2 = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d\n ", arr3[row][col]);
        }

    }

    return 0;
}
