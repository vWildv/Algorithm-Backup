#include<iostream>
using namespace std;
int main()
{
    int n,t,C[100],i;
    while(cin>>n>>t)
    {
        int m=0;
        for(i=1;i<=n;i++)
        {cin>>C[i];}
        for(i=1;i<=n;i++)
        {
            m+=(86400-C[i]);
            if(m>=t) break;
        }
        if(i<=n)cout<<i<<endl;
     else cout<<0<<endl;
    }
    return 0;
}
