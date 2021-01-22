#include <bits/stdc++.h>
using namespace std;

int a[25];

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<=n;i++){
            scanf("%d",&a[i]);
        }
        if(n==0||n==1){
            printf("Yes\n");
            continue;
        }
        else if(n>2){
            printf("No\n");
            continue;
        }
        else{
            printf("%s\n",a[1]*a[1]-4*a[0]*a[2]>=0?"No":"Yes");
        }
    }
}

