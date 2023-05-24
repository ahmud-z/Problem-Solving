#include<stdio.h>
int main()
{
    int num,sum,temp;

    printf("Enter 3 digit number: ");
    scanf("%d",&num);
    printf("\n");

    while(num!=0)
    {
        temp = num%10;

        sum+=temp;

        num=num/10;
    }

    printf("sum of each digit: %d",sum);


    printf("\n");
    return 0;
}
