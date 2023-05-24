#include<stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("\n");

    printf("Enter another number: ");
    scanf("%d",&num2);
    printf("\n");

    printf("Enter another number: ");
    scanf("%d",&num3);
    printf("\n");


    if(num1<num2 && num1<num3)
    {
        printf("%d is smallest number\n",num1);
    }
    else if(num2<num1 && num2<num3)
    {
        printf("%d is smallest number\n",num2);
    }
    else if(num3<num1 && num3<num2)
    {
        printf("%d is smallest number\n",num3);
    }
    else if(num1==num2 && num2==num3 && num1==num3)
    {
        printf("Numbers are equal\n");
    }
    else
    {
        printf("Invalid number\n");
    }

    return 0;
}
