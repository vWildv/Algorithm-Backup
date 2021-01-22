#include <map>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int a[30005],n;
long long c[30005],tmp[100005];
map<int,int> mark;

struct _query{
    int l,r,id;
}q[100005];

bool cmp(_query a,_query b){
    return a.r<b.r;
}

int lowbit(int x){
    return x&-x;
}

int add(int cnt,int v){
    for(int i=cnt;i<=n;i+=lowbit(i))
        c[i]+=v;
}

long long sum(int x){
    return x?c[x]+sum(x-lowbit(x)):0;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        mark.clear();
        memset(c,0,sizeof(c));
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        int m;
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            scanf("%d%d",&q[i].l,&q[i].r);
            q[i].id=i;
        }
        sort(q,q+m,cmp);
        int id=1;
        for(int i=0;i<m;i++){
            while(id<=q[i].r){
                if(mark[a[id]]!=0){
                    add(mark[a[id]],-a[id]);
                    add(id,a[id]);
                    mark[a[id]]=id;
                }
                else{
                    add(id,a[id]);
                    mark[a[id]]=id;
                }
                id++;
            }
            tmp[q[i].id]=sum(q[i].r)-sum(q[i].l-1);
        }
        for(int i=0;i<m;i++) printf("%lld\n",tmp[i]);
    }
}