#include<stdio.h>

int find_length(char str[])
{
    int i,length=0;

    while(str[i]!='\0')
    {
        length++;
        i++;
    }

    return length;
}

int main()
{
    char name[20];

    printf("Enter a string: ");
    scanf("%[^\n]",name);
    printf("\n");

    printf("Length of given string is: %d",find_length(name));
    printf("\n");

    return 0;
}

