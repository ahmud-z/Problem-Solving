#include<stdio.h>
int sum_arr(int arr[], int n)
{
    int i, sum=0;

    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    int num []= {7,5,8,9,7,5,15,6,8,9,11};

    int result=sum_arr(num,11);

    printf("Sum of array is: %d\n",result);

    return 0;
}


