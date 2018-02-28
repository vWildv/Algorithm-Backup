#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            cout<<"NO"<<endl;
        else
        {
            if(a==b||abs(a-b)==1)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
