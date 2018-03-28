#include <bits/stdc++.h>
using namespace std;

int t[100005],x[100005],vis[100005];
queue<int> q;

int main(){
    int n;
    scanf("%d",&n);
    int cnt=0,pos=1;
    for(int i=1;i<=n;i++){
        scanf("%d%d",&t[i],&x[i]);
        for(int j=x[i];j>0;j--){
            int tmp;
            scanf("%d",&tmp);
            q.push(tmp);
            if(!vis[tmp]) cnt++;
            vis[tmp]++;
        }
        while(t[i]-86400>=t[pos]){
            while(x[pos]--){
                int tmpb=q.front();
                q.pop();
                vis[tmpb]--;
                if(!vis[tmpb]) cnt--,vis[tmpb]=0;
            }
            pos++;
        }
        printf("%d\n",cnt);
    }
}