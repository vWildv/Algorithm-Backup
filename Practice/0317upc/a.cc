#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int s,id,p;
};

node a[200005],win[100005],lose[100005];

bool cmp(node a,node b){
    if(a.s==b.s) return a.id<b.id;
    return a.s>b.s;
}

int main(){
    int n,r,q;
    scanf("%d%d%d",&n,&r,&q);
    for(int i=1;i<=2*n;i++){
        a[i].id=i;
        scanf("%d",&a[i].s);
    }
    for(int i=1;i<=2*n;i++) scanf("%d",&a[i].p);
    sort(a+1,a+2*n+1,cmp);
    while(r--){
        int j=1,k=1,l=1;
        for(int i=1;i<=n;i++){
            if(a[2*i-1].p>a[2*i].p){
                a[2*i-1].s++;
                win[j++]=a[2*i-1];
                lose[k++]=a[2*i];
            }
            else{
                a[2*i].s++;
                win[j++]=a[2*i];
                lose[k++]=a[2*i-1];
            }
        }
        int pos1=0,pos2=0;
        for(int i=1,j=1;i<=n&&j<=n;){
            if(cmp(win[i],lose[j])) a[l++]=win[i],i++;
            else a[l++]=lose[j],j++;
            pos1=i;
            pos2=j;
        }
        while(pos2<=n) a[l++]=lose[pos2++];
        while(pos1<=n) a[l++]=win[pos1++];
        //sort(a+1,a+2*n+1,cmp);
    }
    printf("%d\n",a[q].id);
}