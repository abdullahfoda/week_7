

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size;
    int i, j, temp;


    printf("Enter size of array: \n");
    scanf("%d", &size);


    printf("Enter elements in array:\n ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {

        for(j=i+1; j<size; j++)
        {

            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("Elements of array in ascending order:\n ");
    for(i=0; i<size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
