#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int a[300001][2],cnt1[51],cnt2[51];

int main(){
    int n,k,p;
    scanf("%d%d%d",&n,&k,&p);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&a[i][0],&a[i][1]);
        cnt1[a[i][0]]++;
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
        cnt2[a[i][0]]++;
        cnt1[a[i][0]]--;
        if(a[i][1]<=p){
            for(int x=0;x<=k;x++){
                if(x==a[i][0]) ans+=cnt2[x]*cnt1[x]+cnt2[x]-1;
                else ans+=cnt1[x]*cnt2[x];
                cnt2[x]=0;
            }
        }
    }
    printf("%lld\n",ans);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
    return 0;
}