///Calculate number of space from a string or text

#include<iostream>
using namespace std;

int main()
{
    int Count = 0;
    string text;

    cout<<"Enter a string: ";
    getline(cin,text);

    int length = text.length();

    for(int i = 0; i<length; i++)
    {
        if(text[i]==' ')
        {
            Count++;
        }
    }

    cout<<"Total space: "<<Count<<endl;

    cout<<endl;
    return 0;
}
