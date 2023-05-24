#include<stdio.h>
int main()
{
    char alp;

    printf("Enter a alphabet: ");
    scanf(" %c",&alp);

    if(alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u')
    {
        printf("%c is a vowel",alp);
    }

    else if(alp=='A'||alp=='E'||alp=='I'||alp=='O'||alp=='U')
    {
        printf("%c is a vowel",alp);
    }

    else
    {
        printf("%c is constant.",alp);
    }
    return 0;
}
