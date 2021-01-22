#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
#define lowbit(x) x&(-x)

int a[200005];
long long c[3][200005],n,q;

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
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        add(1,i,a[i]-a[i-1]);
        add(2,i,(i-1)*(a[i]-a[i-1]));
    }
    scanf("%d",&q);
    while(q--){
        int flag,l,r;
        scanf("%d%d%d",&flag,&l,&r);
        if(flag==1){
            int x;
            scanf("%d",&x);
            add(1,l,x);
            add(1,r+1,-x);
            add(2,l,x*(l-1));
            add(2,r+1,-x*r);
        }
        else{
            long long tmp1=(l-1)*sum(1,l-1)-sum(2,l-1);
            long long tmp2=r*sum(1,r)-sum(2,r);
            printf("%lld\n",tmp2-tmp1);
        }
    }
    //for(int i=1;i<=n;i++) printf("-a[%d]:%d -c[%d]:%d\n",i,a[i],i,c[i]);
}
