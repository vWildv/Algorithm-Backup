#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

const int N=1005;
ll a[N],cnt[N];
bool vis[N];

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cnt[i]=1;
            memset(vis,0,sizeof(vis));
            for(int j=i+1;j<n;j++){
                if(vis[j]||a[j]%a[i]==0) continue;
                for(int k=j+1;k<n;k++)
                    if(a[k]%a[j]==0) vis[k]=1;
                cnt[i]++;
            }
        }
        printf("%lld\n",*max_element(cnt,cnt+n));
    }
}