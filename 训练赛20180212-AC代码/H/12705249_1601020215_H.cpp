#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a[86405],b[86405];
    cin>>n>>m;
    long long ans=0,num=0;
    for (long long  i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=86400-a[i];
        num+=b[i];
        ans++;
        if(num>=m)
        {
            cout<<ans<<endl;
            break;
        }
    }

}
