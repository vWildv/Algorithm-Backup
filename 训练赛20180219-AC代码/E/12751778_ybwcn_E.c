#include<stdio.h>
int main(){
    int n,k;
    while(~scanf("%d%d",&n,&k)){
        if(n-k>1||k-n>1||(k==0&&n==0))printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
