#include<stdio.h>

int space_counter(char name[])
{
    int space=0;

    for(int i=0; name[i]!='\n'; i++)
    {
        if(name[i]==' ')
        {
            space++;
        }
    }
    return space;
}

int main()
{
    char str[20];
    int empty_space=0;

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    empty_space=space_counter(str);

    printf("Number of space in given string: %d",empty_space);

    printf("\n");

    return 0;
}
