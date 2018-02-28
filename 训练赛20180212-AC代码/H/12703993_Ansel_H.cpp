#include<iostream>
using namespace std;
int main()
{
    int a[105];
    int n,t;
    int ans;
    while(cin>>n>>t)
    {
        int ans=0;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]<86400)
                sum+=(86400-a[i]);
            ///cout<<sum<<endl;
            if(sum>=t && ans==0)
                ans=i;
        }
        cout<<ans<<endl;

    }
}
