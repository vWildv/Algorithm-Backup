#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,t,i;
    int a[205];
    cin>>n>>t;
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    {
        t=t+a[i]-86400;
        if(t<=0)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
