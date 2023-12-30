#include<stdio.h>

int find_fact(int number)
{
    int fact=1;
    int i;

    for(i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int num;

    printf("Enter a number to check: ");
    scanf("%d",&num);

    printf("\n");

    printf("%d factorial is: %d\n",num,find_fact(num));

    return 0;
}

