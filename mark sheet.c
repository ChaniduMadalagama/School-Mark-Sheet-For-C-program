#include"stdio.h"
#include"conio.h"
void main()
{
    float total,itemmarks[10],Totalmarks,average;
    int i,bid,n;
    char item[10][20],cname[20],A,B,C,S,F,grade;


    printf("\nEnter the name of Student=");
    gets(cname);
    printf("\n\nHow manySubjects purchase=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter the %d Subject name=",i+1);
        fflush(stdin);
        gets(item[i]);
        printf("\nEnter the marks of %s item=",item[i]);
        scanf("%f",&itemmarks[i]);
        total+=itemmarks[i];
        average=total/n;
        // It will calculate the Grade
    if (average >= 75)
        grade = 'A';
    else if (average >= 65 && average < 75)
        grade = 'B';
    else if (average >= 55 && average < 65)
        grade = 'C';
    else if (average >= 35 && average < 55)
        grade = 'S';
    else
        grade = 'F';

    }
    printf("\n\n***********STUDENT PROGRESS*************");
    printf("\n\nStudent Name= %s",cname);
    printf("\n------------------------------------------");
    printf("\n\nS.N\tSubject\t\tMarks");
    printf("\n------------------------------------------");
    for(i=0;i<n;i++)
    {
    printf("\n\n%d\t%s\t\t%.2f\t\t",i+1,item[i],itemmarks[i],total);
    }
    printf("\n-------------------------------------------");
    printf("\n\n\tTotal Marks=   %.2f",total);
    printf("\n\n\tAverage Marks= %.2f",average);
    printf("\n\n\tYour Grade is= %c",grade);
    printf("\n-------------------------------------------");
    printf("\n===========================================");
    printf("\n\n*************** Thank you ***************");
    getch();
}
