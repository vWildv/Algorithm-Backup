#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int ans=n*k;
    for (int i=1;i<=n;i++)
    {
        int sum=(double)(0.9*i*k+0.5);
        sum*=(n/i);
        sum+=(int)((double)(0.9*k*(n-n/i*i)+0.5));
        if (sum<ans) ans=sum;
    }
    cout<<ans<<endl;
}

