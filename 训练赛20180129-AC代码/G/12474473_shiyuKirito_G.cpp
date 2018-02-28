#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
const int maxn=1005;
int a[maxn];
int main ()
{
    int n;
    while(cin>>n)
    {
        memset(a,0,sizeof(a));
        int num;
        int max_=0;
        for(int i=1;i<=n;i++)
        {
            cin>>num;
            a[num]++;
            max_=max(max_,a[num]);
        }
        cout<<n-max_<<endl;
    }
}
