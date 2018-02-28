#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    string str;
    while (cin>>str)
    {
        if (str.find("bkpstor")==-1) cout<<"Safe"<<endl;
        else cout<<"Warning"<<endl;
    }
}
