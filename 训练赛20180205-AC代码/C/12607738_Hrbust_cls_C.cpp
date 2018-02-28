#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<LL>a(n+1);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int ans=0;
        for(int i=1;i<=n;i++){
            int tmp=1;
            vector<int>vis(n+1,0);
            for(int j=i+1;j<=n;j++){
                if(vis[j]||a[i]%a[j]==0||a[j]%a[i]==0) continue;
                vis[j]=1;
                tmp++;
                for(int k=j+1;k<=n;k++)
                    if(a[j]%a[k]==0||a[k]%a[j]==0) vis[k]=1;
            }
            ans=max(tmp,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}



