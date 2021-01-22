#include <bits/stdc++.h>
using namespace std;

int a[1005];
int c[1005][1005];
int vis[1005],cnt[1005];
int p[1005];

int main(){
    int n;
    for(int i=0;i<1000;i++){
        c[i][0]=1;
        for(int j=1;j<=i;j++){
            c[i][j]=c[i-1][j]+c[i-1][j-1];
            //printf("-- %d\n",c[i][j]);
        }
    }
    p[0]=1;
    for(int i=1;i<=1005;i++){
        p[i]=p[i-1]*i;
    }
    while(~scanf("%d",&n)){
        memset(vis,0,sizeof(vis));
        memset(cnt,0,sizeof(cnt));
        int sum=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
            cnt[a[i]]++;
        }
        int ans=1;
        for(int i=1;i<=n;i++){
            ans*=c[sum][a[i]];
            sum-=a[i];
        }
        for(int i=1;i<=n;i++){
            if(vis[a[i]]) continue;
            ans/=p[cnt[a[i]]];
            vis[a[i]]=1;
        }
        printf("%d\n",ans);
    }
}
