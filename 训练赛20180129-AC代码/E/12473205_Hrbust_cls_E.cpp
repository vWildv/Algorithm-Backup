#include<bits/stdc++.h>
#define LL long long
using namespace std;

int a[100050];

int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    while(cin>>n>>m){
        vector<int>ans;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        for(int pa=1,pp=1;;pp++){
            if(m<pp) break;
            else if(pa<=n&&pp==a[pa]){
                pa++;
                continue;
            }
            else{
                m-=pp;
                ans.push_back(pp);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<' ';
        cout<<endl;
    }
    return 0;
}