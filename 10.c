#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("student.txt","w");
    int n;
    printf("Please enter the number of students ");
    scanf("%d",&n);
    char name[30];
    int roll,marks,age;
    fprintf(ptr,"Student name\tRoll no.\tAge\tMarks\n");
    for(int i=0;i<n;i++){
        printf("Please enter the name of the student");
        scanf("%s",name);
        printf("Please enter the roll number of the student");
        scanf("%d",&roll);
        printf("Please enter the age of the student");
        scanf("%d",&age);
        printf("Please enter the marks of the student");
        scanf("%d",&marks);

        fprintf(ptr,"%s\t\t%d\t\t%d\t\t%d\n",name,roll,age,marks);
    }
    fclose(ptr);
return 0;
}
