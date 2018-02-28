#include<bits/stdc++.h>
using namespace std;
#define N 1000000007
int main()
{
    long long t,n,m,ans,k;
    cin>>t;
    while(cin>>n>>m)
    {
        ans=0;
        for(long long i=1; i<=n; i++)
        {
             k=1;
            for(int j=0; j<m; j++)
            {
                k*=i;
                if(k>N)
                    k=k%N;
            }
             ans+=k;
        }
        cout<<ans%1000000007<<endl;
    }
}
