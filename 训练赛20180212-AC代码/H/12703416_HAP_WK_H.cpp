#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int aa[105];
int main ()
{
    int n,t;
    while ( cin>>n>>t )
    {
        int i,cnt=2;
        for (i=0;i<n;i++)
        {
            cin>>aa[i];
            aa[i]=86400-aa[i];
        }
        for (i=0;i<n;i++)
        {
            //cout<<t<<endl;
            t = t - aa[i];
            if ( t <= 0 ) break;
        }
        cout<<i+1<<endl;
    }
    return 0;
}
