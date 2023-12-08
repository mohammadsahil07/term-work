#include<stdio.h>
#include<stdlib.h>
int main()
{
    int acc_num[10],balance[10];
    char acc_name[10][30];
    for(int i=0;i<10;i++){
         printf("Please enter the account holder name ");
         scanf(" %s",&acc_name[i]);
        printf("Please enter the account number ");
        scanf("%d",&acc_num[i]);
        printf("Please enter the balance ");
        scanf("%d",&balance[i]);
       
        
    }

    for(int i=0;i<10;i++){
       
        printf("Account Number = %d\t",acc_num[i]);
        printf("Name = %s\t",acc_name[i]);
        printf("Balance = %d\n",balance[i]);
    }
return 0;
}