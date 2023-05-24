#include<stdio.h>
int main()
{
    char str[15];
    int length;

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    for(int i=0; str[i]!='\0'; i++)
    {
        length++;
    }

    for(int i=length-1; i>=0; i--)
    {
        printf("%c ",str[i]);
    }

    return 0;
}
