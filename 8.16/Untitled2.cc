#include <bits/stdc++.h>
using namespace std;

int sum[100005];
int n,k;
char a[100005];

bool check(int x){
    for(int i=1;i<=n;i++){
        if(a[i]=='0'){
            int l=max(1,i-x);
            int r=min(n,i+x);
            if(sum[r]-sum[l-1]>k) return 1;
        }
    }
    return 0;
}

int main(){
    scanf("%d%d",&n,&k);
    getchar();
    for(int i=1;i<=n;i++){
        scanf("%c",&a[i]);
        if(a[i]=='0') sum[i]=sum[i-1]+1;
        else sum[i]=sum[i-1];
    }
    int l=1,r=n;
    while(l<=r){
        int mid=(l+r)>>1;
        if(check(mid)){
            r=mid-1;
        }
        else l=mid+1;
    }
    printf("%d\n",l);
}
