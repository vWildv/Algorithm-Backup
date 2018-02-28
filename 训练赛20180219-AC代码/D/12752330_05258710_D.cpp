#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll maxn=1e9+7;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll tmp,ans=0;
        for (int i=1;i<=n;i++)
        {
            tmp=1;
            int temp=k;
            while (temp)
            {
                temp--;
                tmp=((tmp%maxn)*i)%maxn;
            }
            ans+=tmp;
        }
        ans%=maxn;
        cout<<ans<<endl;
    }
}
