#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    while(~scanf("%d%d%d",&n,&k,&m)&&n&&m&&k){
        int ans=0;
        for(int i=2;i<n;i++) ans=(ans+k)%i;
        ans=(ans+m)%n;
        printf("%d\n",ans+1);
    }
}
