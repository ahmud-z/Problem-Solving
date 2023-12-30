#include<stdio.h>

int find_palidrme(int num)
{
    int rev;

    while(num!=0)
    {
        rev=(rev*10)+(num%10);
        num/=10;
    }

    return rev;
}

int main()
{
    int number,reverse_number;

    printf("Enter a number: ");
    scanf("%d",&number);
    printf("\n");

    reverse_number = find_palidrme(number);

    if(reverse_number==number)
    {
        printf("%d is a palindrome number.",number);
    }
    else
    {
        printf("%d is not a palindrome number.",number);
    }
    printf("\n");

    return 0;
}
