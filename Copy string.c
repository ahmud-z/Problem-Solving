#include<stdio.h>
int main()
{
    char str[20];
    char str_cpy[20];
    int length=0;

    printf("Enter a word: ");
    scanf("%[^\n]",str);

    printf("Given string: %s\n",str);

    for(int i=0; str[i]!='\0'; i++)
    {
        length++;
    }

    for(int i=0; i<length; i++)
    {
        str_cpy[i] = str[i];
    }

    printf("Copied string: %s\n",str_cpy);

    return 0;
}
