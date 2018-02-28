#include <stdio.h>
#include<iostream>
using namespace std;
int k[100005];
int main()
{
    int T;
    while(~scanf("%d",&T)){
    while (T--)
    {
        int n;
        cin>>n;
        k[1]=2;
        for (int i=2;i<=n;i++)cin>>k[i];
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
            if(cs<0)break;
        }
        if (cs>=1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
return 0;
}