#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n,t,sum=0,a,tem=0;
    while(cin>>n>>t)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            t-=(86400-a);
            if(t<=0&&tem==0)
            {
                tem=i;
            }
        }
        cout<<tem<<endl;
    }

}
