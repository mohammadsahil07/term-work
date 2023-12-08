#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2;
    printf("Please enter the coefficients of quadratic equation ax^2+bx+c=0 ");
    scanf("%d %d %d",&a,&b,&c);
    float d=(float)(b*b)-(4*a*c);
    if(d<0){
        printf("Roots are imaginary");
    }
    else{
        x1=(float) ((-b)+sqrt(d))/(2*a);
        x2=(float) ((-b)-sqrt(d))/(2*a);
    }
    

    printf("Roots are %f %f",x1,x2);

return 0;
}