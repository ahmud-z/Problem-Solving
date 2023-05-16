#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    int orginalNumber = num;
    int reverseNumber;

    while(num!=0)
    {
        int remainder = num%10;

        reverseNumber =  reverseNumber * 10 + remainder;

        num = num / 10;
    }

    if(reverseNumber == orginalNumber)
    {
        cout<<orginalNumber<<" is a Palindrome Number"<<endl;
    }
    else
    {
        cout<<orginalNumber<<" is not a Palindrome Number"<<endl;
    }

    return 0;
}
