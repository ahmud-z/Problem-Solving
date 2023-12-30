#include<iostream>
using namespace std;

int findDup(int arr[], int sz)
{

    int flag = -1;

    for(int i = 0; i<sz; i++)
    {
        {
            for(int j = i+1; j<sz; j++)
            {
                if(arr[i] == arr[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
    }
    return flag;
}


int main()
{
    int arr[] =  {9,8,2,6,0,5,2,1};
    int temp = 0;

    temp = findDup(arr,8);

    if(temp == 1)
    {
        cout<<"Duplicate Found";
    }
    else
    {
        cout<<"Duplicate Not Found";
    }

    return 0;
}
