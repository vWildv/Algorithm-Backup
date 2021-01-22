#include <bits/stdc++.h>
using namespace std;

int a[105];

int main(){
    int n;
    while(~scanf("%d",&n)){
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(a[i]==a[i-1]){
                a[i]=0;
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
