#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Please enter the number of elements in array ");
    scanf("%d",&n);
    int *arr = (int*)malloc(4*n);

    for(int i=0;i<n;i++){
        printf("Please enter the data ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
printf("Sorted array \n");
    for(int i=0;i<n;i++){
        
        printf("%d\t",arr[i]);
    }

return 0;
}