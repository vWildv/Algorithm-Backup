#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,k;
    cin>>n>>x;
    int sum=n-1;
    for (int i=0;i<n;i++)
    {
        cin>>k;
        sum+=k;
    }
    if (sum==x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


