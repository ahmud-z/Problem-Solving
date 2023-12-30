#include<stdio.h>

int power_of_number(int numbr, int pow)
{
    int i,power=1;

    while(pow!=0)
    {
        power*=numbr;
        pow--;
    }

    return power;
}

int main()
{
    int num,power;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Enter power: ");
    scanf("%d",&power);
    printf("\n");

    printf("Power of given element is: %d",power_of_number(num,power));
    printf("\n");

    return 0;
}

