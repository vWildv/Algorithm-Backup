#include <bits/stdc++.h>
using namespace std;

int con[30][30];


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int st=0;
        for(int i=1;i<=n;i++){
            int tmp;
            scanf("%d",&tmp);
            st=st|(tmp<<(n-i));
        }
        int en=0;
        for(int i=1;i<=n;i++){
            int tmp;
            scanf("%d",&tmp);
            en=en|(tmp<<(n-i));
        }
        printf("%d\n",st^en);
    }
}
