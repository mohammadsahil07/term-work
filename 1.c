#include<stdio.h>
void exchange(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("Please enter the first value ");
    scanf("%d",&a);
    printf("Please enter the second value ");
    scanf("%d",&b);
    printf("Original values a=%d and b=%d\n",a,b);
    exchange(&a,&b);
    printf("Exchanged values a=%d and b=%d\n",a,b);


return 0;
}