#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    printf("please enter a number ");
    scanf("%d",&(*ptr));

    printf("Value = %d and Address of pointer = %u",*ptr,ptr);
    free(ptr);
return 0;
}