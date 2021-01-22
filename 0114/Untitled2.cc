#include <bits/stdc++.h>
using namespace std;

int a[100005];
int vis[100005];
int ans[100005];
int cnt;

int getprime(){
    for(int i=2;i<100005;i++){
        if(!vis[i]) a[cnt++]=i;
        for(int j=0;j<cnt;j++){
            if(i*a[j]>100005) break;
            vis[i*a[j]]=1;
            if(i%a[j]==0) break;
        }
    }
}

int qpow(int a,int p){
    int ans=1;
    while(p){
        if(p&1) ans*=a;
        a*=a;
        p>>=1;
    }
    return ans;
}

int main(){
    int n;
    scanf("%d",&n);
    getprime();
    int tot=0;
    //for(int i=0;i<cnt;i++) printf("%d ",a[i]);
    for(int i=0;i<cnt;i++){
        //printf("%d ",a[i]);
        if(a[i]>n) break;
        for(int j=1;;j++){

            int tmp=qpow(a[i],j);
            //printf("%d ",tmp);
            if(tmp>n) break;
            ans[tot++]=tmp;
        }
    }
    printf("%d\n",tot);
    for(int i=0;i<tot;i++){
        printf("%d ",ans[i]);
    }
}

