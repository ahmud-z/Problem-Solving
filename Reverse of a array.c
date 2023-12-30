#include<stdio.h>

void reverse_array(int arr[], int n)
{
    int i;

    printf("Reversed array element: ");

    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int sz, i;

    printf("Enter array size: ");
    scanf("%d",&sz);
    printf("\n");


    int num[sz];

    for(i=0; i<sz; i++)
    {
        printf("Enter value in index[%d]: ",i);
        scanf("%d",&num[i]);
    }
    printf("\n");


    reverse_array(num,sz);

    printf("\n");

    return 0;
}


