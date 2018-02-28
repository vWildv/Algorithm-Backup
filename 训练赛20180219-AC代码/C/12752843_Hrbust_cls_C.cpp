#include <bits/stdc++.h>
using namespace std;
int k[100005];
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        for (int i=2;i<=n;i++)
            cin>>k[i];
        if (n%2==1)
        {
            cout<<"No"<<endl;
            continue;
        }
        int cs=0;
        for (int i=n;i>=2;i--)
        {
            if (k[i]==1) cs++;
            else cs--;
            if (cs<0)
            {
                break;
            }
        }
        if (cs>=1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
