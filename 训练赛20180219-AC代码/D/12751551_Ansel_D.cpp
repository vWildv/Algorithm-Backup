#include<stdio.h>
#include<iostream>
using namespace std;
const long long  mo=1e9+7;
long long mi(long long  a,int  b)
{
    long long ans=1,tmp=a;
    while(b)
    {
        if(b&1)
        {
            ans*= tmp;
            ans%=mo;
        }
        tmp*=tmp;
        tmp%=mo;
        b>>=1;
    }
    return ans;
}
int main()
{
    int n,t,k;
    cin>>t;
    while(t--)
    {
        scanf("%d%d",&n,&k);
        long long sum=0;
        for(int i=1; i<=n; i++)
        {
            sum=(sum+mi(i,k))%mo;
        }

        cout<<sum<<endl;
    }
}
