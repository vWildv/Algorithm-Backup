#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,p,q;
    while (cin>>n>>p>>q)
    {
        int ans=0;
        ans+=n/2+(n%2);
        if(n%2){
            p-=p>=1;
            q-=q>=1;
        }

        ans+=(p+q)/4;
        if((p+q)%4)ans+=1;
        cout<<ans<<endl;
    }
}
