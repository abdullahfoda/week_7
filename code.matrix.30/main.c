
#include <stdio.h>

#define SIZE 3

int main()
{
    int arr1[SIZE][SIZE];
    int row, col, sum = 0;


    printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &arr1[row][col]);
        }
    }


    for(row=0; row<SIZE; row++)
    {
        sum = 0;
        for(col=0; col<SIZE; col++)
        {
            sum += arr1[row][col];
        }

        printf("Sum of elements of Row %d = %d\n", row+1, sum);
    }


    for(row=0; row<SIZE; row++)
    {
        sum = 0;
        for(col=0; col<SIZE; col++)
        {
            sum += arr1[col][row];
        }

        printf("Sum of elements of Column %d = %d\n", row+1, sum);
    }

    return 0;
}
