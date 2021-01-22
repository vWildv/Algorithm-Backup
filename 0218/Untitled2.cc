#include <bits/stdc++.h>
using namespace std;

int vis[10000005],prime[10000005];
int n,tot;
int cnt[10000005];

void getprime(){
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            tot++;
            prime[tot]=i;
        }
        //else printf("-- %d\n",i);
        for(int j=1;(j<=tot)&&(i*prime[j]<=n);j++){
            cnt[prime[j]]++,vis[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
}

int main(){
    int k;
    scanf("%d%d",&n,&k);
    getprime();
    int sum=0;
    for(int i=1;i<=tot;i++){
        sum+=(cnt[prime[i]]+1);
        //printf("%d %d\n",prime[i],cnt[prime[i]]);
        if(sum>=k){
            printf("%d\n",i);
            break;
        }
    }
}
