#include <bits/stdc++.h>
using namespace std;

const int N=132000;
int s[4*N],f[4*N];
int a[N];
int cnt=0;

void build(int st,int L,int R){
    if(L==R){
        f[st]=0;
        s[st]=a[++cnt];
        return ;
    }
    int mid=(L+R)>>1;
    build(st<<1,L,mid);
    build((st<<1)|1,mid+1,R);
    f[st]=f[st*2]+1;
    if(f[st]&1) s[st]=(s[st<<1]|s[(st<<1)|1]);
    else s[st]=(s[st<<1]^s[(st<<1)|1]);
}

void update(int st,int L,int R,int l,int val){
    if(L==l&&l==R){
        s[st]=val;
        return ;
    }
    int mid=(L+R)>>1;
    if(mid>=l) update(st<<1,L,mid,l,val);
    else update((st<<1)|1,mid+1,R,l,val);
    f[st]=f[st*2]+1;
    if(f[st]&1) s[st]=(s[st<<1]|s[(st<<1)|1]);
    else s[st]=(s[st<<1]^s[(st<<1)|1]);
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=(1<<n);i++){
        scanf("%d",&a[i]);
    }
    build(1,1,(1<<n));
    while(m--){
        int p,x;
        scanf("%d%d",&p,&x);
        update(1,1,(1<<n),p,x);
        printf("%d\n",s[1]);
    }
}
