#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int a[1005];

int find(int x){
    if(a[x]!=x) a[x]=find(a[x]);
    return a[x];
}

void unit(int x,int y){
    x=find(x);
    y=find(y);
    a[x]=y;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++) a[i]=i;
        while(m--){
            int tmpa,tmpb;
            scanf("%d%d",&tmpa,&tmpb);
            unit(tmpa,tmpb);
        }
        int sum=0;
        for(int i=1;i<=n;i++)
            if(a[i]==i) sum++;
        printf("%d\n",sum);
    }
}