#include<stdio.h>
int main()
{
    int n;
    printf("please enter the number ");
    scanf("%d",&n);
    int a=n,sum=0;

    while(n!=0){
       int r=n%10;
       sum=10*sum+r;
       n/=10;
    }

    if(a==sum){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
return 0;
}