/// Check whether a string is Strong or Weak!

#include<iostream>
using namespace std;

int main()
{
    int sz;

    cout<<"Enter string size: ";
    cin>>sz;

    fflush(stdin);
    char text[sz];

    cout<<"\nEnter a text: ";
    cin.getline(text, sz+1);

    for(int i = 0; text[i]!='\0'; i++)
    {
        if((text[i]>='0'&& text[i]<='9')||text[i]=='#'||text[i]=='@')
        {
            cout<<"\nStrong"<<endl;
            return 0;
        }
    }

    cout<<"\nWeak"<<endl;

    return 0;
}
