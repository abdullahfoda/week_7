#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , size ;
    int arr[100];
    printf("enter size\n");
    scanf("%d",&size);

    printf("enter array element\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements after reverse:\n");
    for(i=size-1;i>=0;i--){
    printf("%d\n",arr[i]);

    }

    return 0;
}
