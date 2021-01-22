#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int a[50005],L,n,m;

int judge(int d){
    int pos=0,cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]-pos<d) cnt++;
        else pos=a[i];
    }
    if(L-pos<d) cnt++;
    return cnt;
}

int main(){
    scanf("%d%d%d",&L,&n,&m);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    int l=1,r=L+1,mid=(l+r)>>1;
    while(l<r-1){
        if(judge(mid)<=m)l=mid;
        else r=mid;
        mid=(l+r)>>1;
    }
    printf("%d\n",l);
}