#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

long long map[300][300],a[300][300];

int main(){
    int d,n;
    scanf("%d%d",&d,&n);
    while(n--){
        int x,y;
        long long k;
        scanf("%d%d%lld",&x,&y,&k);
        map[x][y]=k;
    }
    for(int i=0;i<=128;i++)
        for(int j=0;j<=128;j++)
            for(int k=max(i-d,0);k<=min(i+d,129);k++)
                for(int l=max(j-d,0);l<=min(j+d,129);l++)
                    a[i][j]+=map[k][l];
    long long maxn=-1;
    for(int i=0;i<=128;i++) maxn=max(maxn,*max_element(a[i],a[i]+129));
    int cnt=0;
    for(int i=0;i<=128;i++)
        for(int j=0;j<=128;j++) if(a[i][j]==maxn) cnt++;
    printf("%d %lld\n",cnt,maxn);
}