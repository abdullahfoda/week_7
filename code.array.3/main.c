#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max1=0;
    int max2 =0;

    int arr[100];

    for(int i=0 ; i<10 ;i++){

       scanf("%d",&arr[i]);
       if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
       }
       else if(arr[i]<max1 && arr[i]>max2)
       {
           max2= arr[i];
       }

    }

    printf("the first largest is : %d\n",max1);
    printf("the second largest is : %d\n",max2);
    return 0;
}
