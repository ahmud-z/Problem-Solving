#include<stdio.h>
int main()
{
    char str[25];

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    int length=0;

    for(int i=0; str[i]!='\0'; i++)
    {
        length++;
    }

    printf("Given string: %s\n",str);

    printf("Given string length: %d",length);

    return 0;
}
