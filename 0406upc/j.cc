#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a[4]={0,0,0,0};
        scanf("%d",&n);
        for(int i=1;i<=2*n;i++){
            int tmp;
            scanf("%d",&tmp);
            a[tmp%3]++;
        }
        if(a[0]<=n){
            if(a[0]<=1&&a[1]>0&&a[2]>0) printf("NO\n");
            else if(a[1]==0||a[2]==0) printf("YES\n");
            else if(a[0]>=2&&a[1]>0&&a[2]>0){
                if(a[0]==2&&a[1]%2==0&&a[2]%2==0) printf("NO\n");
                else printf("YES\n");
            }
        }
        else printf("NO\n");
    }
}