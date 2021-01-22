#include <bits/stdc++.h>
#define lowbit(x) x&-x
using namespace std;

int a[10005];
int c[10005];
int dp[10005];
int n;

void update(int x){
    int l,i;
    while(x<=n){
        c[x]=a[x];
        l=lowbit(x);
        for(int i=1;i<l;i<<=1) c[x]=max(c[x],c[x-i]);
        x+=lowbit(x);
    }
}

int query(int x,int y){
    int ans=0;
    while(y>=x){
        ans=max(a[y],ans);
        y--;
        while(y-lowbit(y)>=x){
            ans=max(c[y],ans);
            y-=lowbit(y);
        }
    }
    return ans;
}

int main(){
    int k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        update(i);
    }
    for(int i=1;i<=n;i++){
        int maxn=-1;
        for(int j=i;j>=1&&i-j+1<=k;j--){
            maxn=max(maxn,a[j]);
            dp[i]=max(dp[i],dp[j-1]+maxn*(i-j+1));
        }
    }
    printf("%d\n",dp[n]);
}

