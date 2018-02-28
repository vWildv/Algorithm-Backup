#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        sum+=86400-k;
        if (sum>=t)
        {
            cout<<i<<endl;
            return 0;
        }
    }

}

