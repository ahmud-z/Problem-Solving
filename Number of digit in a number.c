#include<stdio.h>

int digit_counter(int number)
{
    int count=0;
    while(number!=0)
    {
        number/=10;
        count++;
    }
    return count;
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\n");

    printf("[%d] made of %d digits.",num,digit_counter(num));
    printf("\n");

    return 0;
}
