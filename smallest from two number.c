#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("\n");

    printf("Enter another number: ");
    scanf("%d",&num2);
    printf("\n");

    if(num1<num2)
    {
        printf("%d is smallest\n",num1);
    }
    else if(num1>num2)
    {
        printf("%d is smallest\n",num2);
    }
    else if(num1==num2)
    {
        printf("Given numbers are equal\n");
    }
    else
    {
        printf("Invalid number\n");
    }


    printf("\n");
    return 0;
}
