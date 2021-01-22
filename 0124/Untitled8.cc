#include <bits/stdc++.h>
using namespace std;

int vis[100005];
int ans[100005];
long long maxn=-1;
long long mini=0x3f3f3f3f;

void getprime(){
    int tot=0;
    for(int i=2;i<=100005;i++){
        if(!vis[i]){
            tot++;
            ans[tot]=i;
            //printf("%d ",i);
        }
        for(int j=1;((j<=tot)&&(i*ans[j]<=100005));j++){
            vis[i*ans[j]]=1;
            if(i%ans[j]==0) break;
        }
    }
}

void dfs(int cnt,long long res,long long x,long long n){
    if(res>maxn||(res==maxn&&x<mini)){
        maxn=res;
        mini=x;
    }
    for(int i=1;i<=64;i++){
        x*=ans[cnt];
        if(x>n) return;
        dfs(cnt+1,res*(i+1),x,n);
    }
}

int main(){
    long long n;
    getprime();
    while(~scanf("%lld",&n)){
        long long sum=1; int cnt=1;
        dfs(1,1,1,n);
        printf("%lld\n",mini);
    }
}
