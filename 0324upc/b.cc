#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int a[200005],b[200005],cnt[200005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    int ans=n;
    for(int i=1;i<=n;i++){
        if(b[i]) continue;
        b[i]=i;
        cnt[i]=1;
        int pos=i;
        while(b[a[pos]]==0){
            b[a[pos]]=i;
            cnt[a[pos]]=cnt[pos]+1;
            pos=a[pos];
        }
        if(b[a[pos]]==i) ans=min(cnt[pos]-cnt[a[pos]]+1,ans);
    }
    printf("%d\n",ans);
}