#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int ans=0x3f3f3f3f;
    for(int i=0;i<3;i++){
        int num,p;
        scanf("%d%d",&num,&p);
        ans=min(ans,(n+(num-1))/num*p);
    }
    printf("%d\n",ans);
}