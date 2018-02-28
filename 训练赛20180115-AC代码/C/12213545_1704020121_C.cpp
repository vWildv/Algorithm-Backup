#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    string b = "bkpstor";
    while(cin>>a)
    {
        string::size_type idx;
        if ( a.find(b) != string::npos )
        {
            cout <<"Warning"<<endl;
        }
        else
        {
            cout <<"Safe"<<endl;
        }
    }
}

