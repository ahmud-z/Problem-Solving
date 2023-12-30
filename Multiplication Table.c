#include<stdio.h>

void mulplication_table(int value)
{
    int i;

    for(i=1; i<=10; i++)
    {
        printf("%d*%d=%d\n",value,i,value*i);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\n");

    printf("Multiplication table of %d is: \n",num);
    printf("\n");

    mulplication_table(num);

    return 0;
}

