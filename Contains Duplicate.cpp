#include<iostream>
using namespace std;

int main()
{
    int sz;
    bool flag = false;

    cout<<"Enter array size: ";
    cin>>sz;

    int arr[sz];

    cout<<"Enter array elements: ";
    for(int i = 0; i<sz; i++)
    {
        cin>>arr[i];
    }


    for(int i = 0; i<sz; i++)
    {
        int temp = i;

        for(int j = i+1; j<sz; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = true;
            }

        }
    }


    if(flag)
    {
        cout<<"Duplicate Exist"<<endl;
    }
    else
    {
        cout<<"No Duplicate found"<<endl;
    }


    return 0;
}
