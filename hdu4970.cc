#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define lowbit(x) x&(-x)

long long c[3][100005],n,q;

void add(int sign,int pos,int val){
    while(pos<=n){
        c[sign][pos]+=val;
        pos+=lowbit(pos);
    }
}

long long sum(int sign,int x){
    long long ans=0;
    while(x>0){
        ans+=c[sign][x];
        x-=lowbit(x);
    }
    return ans;
}

int main(){
    while(~scanf("%d",&n)&&n){
        memset(c,0,sizeof(0));
        scanf("%d",&q);
        int l,r,x;
        while(q--){
            scanf("%d%d%d",&l,&r,&x);
            add(1,l,x);
            add(1,r+1,-x);
            add(2,l,x*(l-1));
            add(2,r+1,-x*r);
        }
        int k,cnt=0;
        scanf("%d",&k);
        long long hp;
        while(k--){
            scanf("%lld%d",&hp,&l);
            long long tmp1=(l-1)*sum(1,l-1)-sum(2,l-1);
            long long tmp2=n*sum(1,n)-sum(2,n);
            if((tmp2-tmp1)<hp) cnt++;
            //printf("%lld\n",tmp2-tmp1);
        }
        printf("%d\n",cnt);
    }
}

