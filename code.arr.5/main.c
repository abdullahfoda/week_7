#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int i,elem , pos, size ;

     printf("Enter size of the array : ");
    scanf("%d", &size);

     printf("Input array elements:\n");
    for( i=0; i<size; i++){
    scanf("%d",&arr[i]);
    }

    printf("Input element to insert:\n");
     scanf("%d",&elem);

     printf("Input position where to insert:\n");
      scanf("%d",&pos);

 if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {

        for( i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }


        arr[pos-1] = elem;
        size++;


        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}
