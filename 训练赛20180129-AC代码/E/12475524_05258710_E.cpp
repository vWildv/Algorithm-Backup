#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;
typedef long long ll;
ll a[100005];
int main ()
{
    ll n,m;
    cin>>n>>m;
        vector<int>ans;
        memset (a,0,sizeof(a));
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=m;
        int cnt=0;
        sort(a,a+n);
        int tmp=0;
        for (int i=1;;i++)
        {
            if (sum<i)break;
            if (i!=a[tmp]){
                sum-=i;
                ans.push_back(i);
                cnt++;
            }
            else tmp++;
        }
        cout<<cnt<<endl;
        for (int i=0;i<cnt;i++)
        {
            if (i)cout<<" ";
            cout<<ans[i];
        }
        cout<<endl;


}
