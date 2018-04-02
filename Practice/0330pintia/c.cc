#include <bits/stdc++.h>
using namespace std;

int a[1005];

int main(){
    int n;
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        for(int j=1;j<=t;j++){
            int tmp;
            scanf("%d",&tmp);
            a[tmp]++;
        }
    }
    int maxn=-1;
    int pos=0;
    for(int i=1;i<=1001;i++){
        if(a[i]>=maxn){
            maxn=a[i];
            pos=i;
        }
    }
    printf("%d %d\n",pos,a[pos]);
}