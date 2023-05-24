#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter Three Number: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n");

    if(a>=b && a>=c)
    {
        printf("%d is Largest Number\n",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d is Largest Number\n",b);
    }
    else
    {
        printf("%d is Largest Number\n",c);
    }

    printf("\n");

    return 0;
}
