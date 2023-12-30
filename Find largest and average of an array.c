#include<stdio.h>

int find_average(int arr[], int n)
{
    int i, avg=0,sum=0;

    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }

    avg=sum/n;

    return avg;
}

int find_largest(int arr[], int n)
{
    int large=arr[0];
    int i;

    for(i=0; i<n; i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    }
    return large;
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

    printf("Largest element of given array is: %d\n",find_largest(num,sz));
    printf("Average of given array is: %d",find_average(num,sz));

    printf("\n");

    return 0;
}


