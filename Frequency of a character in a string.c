#include<stdio.h>
int find_freq(char name[], char symb)
{
    int freq=0;
    int i=0;

    for(i=0; name[i]!='\n'; i++)
    {
        if(name[i]==symb)
        {
            freq++;
        }
    }
    return freq;
}

int main()
{
    char str[25];
    char alp;

    printf("Enter a string: ");
    scanf("%[^\n]",str);
    printf("\n");

    printf("Enter single char to check frequency: ");
    scanf(" %c",&alp);
    printf("\n");

    printf("Frequency of given character is: %d",find_freq(str,alp));
    printf("\n");

    return 0;
}

