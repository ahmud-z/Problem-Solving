#include<stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d",&marks);

    printf("\n");


    if(marks>100)
    {
        printf("Invalid Marks");
    }
    else if(marks>=80 && marks<=100)
    {
        printf("Your Grade is A+");
    }

    else if(marks>=75 && marks<=79)
    {
        printf("Your Grade is A");
    }

    else if(marks>=70 && marks<=74)
    {
        printf("Your Grade is A-");
    }

    else if(marks>=65 && marks<=69)
    {
        printf("Your Grade is B+");
    }

    else if(marks>=60 && marks<=64)
    {
        printf("Your Grade is B");
    }

    else if(marks>=55 && marks<=59)
    {
        printf("Your Grade is B-");
    }

    else if(marks>=50 && marks<=54)
    {
        printf("Your Grade is C+");
    }
    else if(marks>=45 && marks<=49)
    {
        printf("Your Grade is C");
    }
    else if(marks>=40 && marks<=44)
    {
        printf("Your Grade is D");
    }

    else if(marks<=39 && marks>=0)
    {
        printf("Your grade is F");
    }

    else if(marks<0)
    {
        printf("Invalid marks");
    }

    printf("\n");


    return 0;
}
