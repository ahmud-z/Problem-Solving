#include<stdio.h>

int check_prime(int number)
{
    int i, flag=0;

    if(number==1 || number==0)
    {
        flag=1;
        return flag;
    }

    for(i=2; i<number; i++)
    {
        if(number%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}

int main()
{
    int num;

    printf("Enter a number to check: ");
    scanf("%d",&num);

    printf("\n");

    int flag=check_prime(num);

    if(flag==1)
    {
        printf("%d is not prime number",num);
    }
    else
    {
        printf("%d is a prime number",num);
    }
    printf("\n");

    return 0;
}


