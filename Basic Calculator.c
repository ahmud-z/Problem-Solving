#include<stdio.h>
int main()
{
    int num1,num2;
    char opt;

    printf("Enter a number: ");
    scanf("%d",&num1);

    printf("Enter another number: ");
    scanf("%d",&num2);

    printf("Enter operator: ");
    scanf(" %c",&opt);

    switch(opt)
    {
    case '+':
        printf("Sum result: %d",num1+num2);
        break;

    case'-':
        printf("Subtract result: %d",num1-num2);
        break;

    case'*':
        printf("Multiply result: %d",num1*num2);
        break;

    case'/':
        printf("Division result: %d",num1/num2);
        break;

    case'%':
        printf("Remainder result: %d",num1%num2);
        break;

    default:
        printf("Invalid Input!");
    }

    return 0;
}

