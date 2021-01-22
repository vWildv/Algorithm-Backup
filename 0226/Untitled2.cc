#include <bits/stdc++.h>
using namespace std;

int a[55],b[55];

int main(){
    int n;
    while(~scanf("%d",&n)&&n){
        char s;
        getchar();
        scanf("%c",&s);
        memset(b,0,sizeof(b));
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        if(s=='P'){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(a[j]==i) break;
                    else if(a[j]>i) b[i]++;
                }
            }
            for(int i=1;i<=n;i++){
                printf("%d ",b[i]);
            }
            printf("\n");
        }
        else{
            for(int i=1;i<=n;i++){
                int pos=a[i]+1; int j;
                for(j=1;j<=n&&j<=pos;j++){
                    if(b[j]!=0) pos++;
                }
                b[pos]=i;
            }
            for(int i=1;i<=n;i++){
                printf("%d ",b[i]);
            }
            printf("\n");
        }
    }
}
