#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,s;
    printf("Please enter the number of elements in array ");
    scanf("%d",&n);
    int *arr = (int*)malloc(4*n);

    for(int i=0;i<n;i++){
        printf("Please enter the data ");
        scanf("%d",&arr[i]);
    }
   
    printf("Please enter the search element ");
    scanf("%d",&s);

    for(int i=0;i<n;i++){
       if(s==arr[i]){
         printf("%d is the searched element with index %d\n",arr[i],i+1);
       }
    }
     
     free(arr);


return 0;
}