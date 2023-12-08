#include<stdio.h>
int main()
{
    char S1[100],S2[100];
    printf("Please enter the first string ");
    gets(S1);
    printf("Please enter the second string ");
    gets(S2);

    char concat[200];

    int i=0,s=0,l=0;
    while(S1[i]!='\0'){
       concat[i]=S1[i];
       if(S1[i]!=' '){l++;}
       else{s++;}
       i++;
    }
    concat[i]=' ';
    int j=0,s1=0,l1=0;
    while(S2[j]!='\0'){
        concat[i+1]=S2[j];
         if(S2[j]!=' '){l1++;}
       else{s1++;}
        j++;
        i++;
    }
    
    S2[i]='\0';
    puts(concat);
    
    printf("In String 1 - Number of characters =%d and Number of spaces =%d\nIn String 2 - Number of characters =%d and Number of spaces =%d",l,s,l1,s1);

    

return 0;
}