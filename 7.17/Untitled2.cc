#include <bits/stdc++.h>
using namespace std;

int a[1000005];
int cnt[105];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;

    for(int i=1;i<=n;i++){
        sum+=a[i];
        if(sum>m){
            int tmp=sum-m;
            int res=0;
            for(int i=100;i>=1;i--){
                if(cnt[i]==0) continue;
                int x=ceil(1.0*tmp/i);
                if(cnt[i]>=x){
                    res+=x;
                    printf("%d ",res);
                    break;
                }
                else{
                    res+=cnt[i];
                    tmp-=cnt[i]*i;
                }
            }
        }
        else printf("0 ");
        cnt[a[i]]++;
    }
}
