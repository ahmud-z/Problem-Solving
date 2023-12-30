#include<stdio.h>

void ASCII_value(char alp)
{
    printf("ASCII value of '%c' is: %d",alp,alp);
}

int main()
{
    char alp;

    printf("Enter a alphabet: ");
    scanf(" %c",&alp);
    printf("\n");

    ASCII_value(alp);
    printf("\n");

    return 0;
}


