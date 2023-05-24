#include<stdio.h>
int main()
{
    int n1,n2,temp;

    printf("Enter your first number: ");
    scanf("%d",&n1);

    printf("Enter your second number: ");
    scanf("%d",&n2);

    temp=n1;
    n1=n2;
    n2=temp;

    printf("After swap: \n");
    printf("Your first number: %d\n",n1);
    printf("Your second number: %d\n",n2);

    return 0;
}
