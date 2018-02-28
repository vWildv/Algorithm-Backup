#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m,ans;
    while(cin>>n>>m)
    {
        t=abs(m-n);
        if(t>=2||(m==0&&n==0))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

}
