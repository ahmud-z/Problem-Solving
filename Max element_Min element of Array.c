#include<stdio.h>
int main()
{
    int arr[5];

    for(int i=0; i<5; i++)
    {
        printf("Enter value in index[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    int min=arr[0];

    for(int i=0; i<5; i++)
    {
        if(arr[i] >= max)
        {
            max=arr[i];
        }

        else if(arr[i]<=min)
        {
            min=arr[i];
        }
    }

    printf("Max: %d\n",max);
    printf("Min: %d",min);

    return 0;

}
