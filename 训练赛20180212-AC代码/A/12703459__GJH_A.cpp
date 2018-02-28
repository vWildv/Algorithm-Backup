#include <bits/stdc++.h>
using namespace std;
int num[200005];
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
       cin>>num[i];

    for (int i=0;i<n-1;i++)
    {
        if(num[i]<0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if (num[i]%2!=0) num[i+1]--;
    }
    if(num[n-1]%2!=0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
