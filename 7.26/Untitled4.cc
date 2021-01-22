#include <bits/stdc++.h>
using namespace std;

int p[300005];
int a[300005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a[i]=0;
        scanf("%d",&p[i]);
    }
    int cnt=n;int res=1;
    printf("%d",1);
    for(int i=1;i<=n;i++){
        a[p[i]]=1;
        if(p[i]<cnt){
            res++;
            printf(" %d",res);
        }
        else{
            int j;
            for(j=cnt;j>0;j--){
                if(a[j]==0) break;
                res--;
            }
            cnt=j;
            res++;
            printf(" %d",res);
        }
    }
}
