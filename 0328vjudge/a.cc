#include <bits/stdc++.h>
using namespace std;

int a[55][55];

int main(){
    int n,flag=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1) continue;
            flag=0;
            for(int k=1;k<=n;k++)
                for(int l=1;l<=n;l++)
                    if(a[i][k]+a[l][j]==a[i][j]) flag=1;
            if(!flag){
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
}