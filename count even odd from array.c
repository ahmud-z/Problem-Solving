#include<stdio.h>

void even_odd(int arr[], int n)
{
    int i, even=0, odd=0;

    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even element in given array: %d\n\n",even);
    printf("Odd element in given array: %d\n",odd);
}

int main()
{
    int sz,i;

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

    even_odd(num,sz);

    return 0;
}

