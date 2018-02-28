#include<stdio.h>
int main(){
    int a,b,x;
    while(~scanf("%d%d",&a,&b)){
        b-=a-1;
        while(a--){
            scanf("%d",&x);
            b-=x;
        }
        if(b==0)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
