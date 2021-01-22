#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int a[205],b[205];

int main(){
    int n,na,nb;
    scanf("%d%d%d",&n,&na,&nb);
    for(int i=1;i<=na;i++) scanf("%d",&a[i]);
    for(int i=1;i<=nb;i++) scanf("%d",&b[i]);
    int cnta=1,cntb=1,ans1=0,ans2=0;
    while(n--){
        if(cnta>na) cnta=1;
        if(cntb>nb) cntb=1;
        if(a[cnta]==0){
            if(b[cntb]==1) ans2++;
            if(b[cntb]==2) ans1++;
            if(b[cntb]==3) ans1++;
            if(b[cntb]==4) ans2++;
        }
        if(a[cnta]==1){
            if(b[cntb]==0) ans1++;
            if(b[cntb]==2) ans2++;
            if(b[cntb]==3) ans1++;
            if(b[cntb]==4) ans2++;
        }
        if(a[cnta]==2){
            if(b[cntb]==0) ans2++;
            if(b[cntb]==1) ans1++;
            if(b[cntb]==3) ans2++;
            if(b[cntb]==4) ans1++;
        }
        if(a[cnta]==3){
            if(b[cntb]==0) ans2++;
            if(b[cntb]==1) ans2++;
            if(b[cntb]==2) ans1++;
            if(b[cntb]==4) ans1++;
        }
        if(a[cnta]==4){
            if(b[cntb]==0) ans1++;
            if(b[cntb]==1) ans1++;
            if(b[cntb]==2) ans2++;
            if(b[cntb]==3) ans2++;
        }
        cnta++,cntb++;
    }
    printf("%d %d\n",ans1,ans2);
}