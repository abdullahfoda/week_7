
#include <stdio.h>
#define SIZE 3

int main()
{
    int arr1[SIZE][SIZE];
    int arr2[SIZE][SIZE];

    int row, col, isSymmetric;


    printf("Enter elements in matrix of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &arr1[row][col]);
        }
    }


    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {

            arr2[row][col] = arr1[col][row];
        }
    }



    isSymmetric = 1;
    for(row=0; row<SIZE && isSymmetric; row++)
    {
        for(col=0; col<SIZE; col++)
        {

            if(arr1[row][col] !=arr2[row][col])
            {
                isSymmetric = 0;
                break;
            }
        }
    }


    if(isSymmetric == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");

        for(row=0; row<SIZE; row++)
        {
            for(col=0; col<SIZE; col++)
            {
                printf("%d ", arr1[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }

    return 0;
}
