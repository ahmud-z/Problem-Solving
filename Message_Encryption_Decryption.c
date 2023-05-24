#include<stdio.h>
int main()
{

    char name[50];

    printf("Text: ");
    gets(name);

    for(int i=0; i<25 && name[i]!='\0'; i++)
    {
        if(name[i]==' ')
        {
            continue;
        }
        name[i]+=5;
    }

    printf("\n");
    printf("Encrypted Message: %s\n",name);

    for(int i=0; i<25 && name[i]!='\0'; i++)
    {
        if(name[i]==' ')
        {
            continue;
        }
        name[i]-=5;
    }

    printf("\n");
    printf("Decrypted Message: %s",name);
    printf("\n");

    return 0;
}

