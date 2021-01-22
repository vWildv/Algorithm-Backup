#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

const int maxn=1001;
ll a[maxn],n;
bool vis[maxn];

void dfs(int x){
    vis[x]=1;
    for(int i=x+1;i<n;i++)
        if(a[i]%a[x]==0){
            dfs(i);
            return;
        }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        memset(vis,0,sizeof(vis));
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        int ans=0;
        for(int i=0;i<n;i++)
            if(!vis[i]){
                dfs(i);
                ans++;
            }
        printf("%d\n",ans);
    }
    return 0;
}