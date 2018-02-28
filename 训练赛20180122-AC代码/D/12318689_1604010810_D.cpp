#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,e;
    while (~scanf("%lld",&n))
    {
        map<ll,int>mp;
        m=(n+1)/2;
        while(n--)
        {
            scanf("%lld",&e);
            mp[e]++;
        }
        for(i=0;i<999999;i++){
            if(mp[i]>=m)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}