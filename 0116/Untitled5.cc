#include <bits/stdc++.h>
using namespace std;

int cnt[5005];
int ans[5005];
int a[5005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        memset(cnt,0,sizeof(cnt));
        int id=a[i];
        cnt[id]++;
        ans[id]++;
        for(int j=i+1;j<=n;j++){
            int pos=a[j];
            cnt[pos]++;
            if(cnt[pos]>cnt[id]){
                ans[pos]++;
                id=pos;
            }
            else if(cnt[pos]==cnt[id]&&pos<id){
                ans[pos]++;
                id=pos;
            }
            else{
                ans[id]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");
}
