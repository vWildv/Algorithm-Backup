#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool judge(ll n)
{
    ll i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    ll n;
    while(cin>>n)
    {
        ll a,b,c;
        if(n==6){
            printf("2 2 2\n");
            continue;
        }
        if(n%2==0)
        {
            printf("2 ");
            n-=2;
            ll i,j;
            for(i=n-2,j=2;i>=n/2&&j<=n/2;i--,j++)
            {
                if(judge(i)&&judge(j))
                {
                    cout<<i<<' '<<j<<endl;
                    break;
                }
            }
        }
        else
        {
            printf("3 ");
            n-=3;
            ll i,j;
            for(i=n-2,j=2;i>=n/2&&j<=n/2;i--,j++)
            {
                if(judge(i)&&judge(j))
                {
                    cout<<i<<' '<<j<<endl;
                    break;
                }
            }
        }
    }
}
