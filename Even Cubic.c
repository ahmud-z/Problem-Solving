#include<stdio.h>

void cubic(int i)
{
    printf("%d ",i*i*i);
}

int main()
{
    int sz;

    printf("Enter array size: ");
    scanf("%d",&sz);

    int arr[sz];

    for(int i=0; i<sz; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<sz; i++)
    {
        if(arr[i]%2==0)
        {
            cubic(arr[i]);
        }
    }

    return 0;
}
