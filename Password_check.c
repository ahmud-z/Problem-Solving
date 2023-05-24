#include<stdio.h>
int main()
{
    char pass[50];
    int alp = 0, numeric = 0, s_char = 0;

    printf("Enter a password: ");
    scanf("%[^\n]",pass);
    printf("\n");

    for(int i=0; pass[i]!='\0'; i++)
    {
        if(pass[i]>='0' && pass[i]<='9')

        {
            numeric++;
        }

        else if(pass[i]>='a' && pass[i]<='z')
        {
            alp++;
        }

        else
        {
            s_char++;
        }
    }

    printf("Number: %d\n",numeric);
    printf("alphabet: %d\n",alp);
    printf("Special character: %d\n",s_char);

    printf("\n");

    if(numeric>=3 && s_char>=4)
    {
        printf("Password is strong!\n");
    }
    else
    {
        printf("Password is weak!\n");
    }

    return 0;
}
