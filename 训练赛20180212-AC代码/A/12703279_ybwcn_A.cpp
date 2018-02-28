#include<stdio.h>
int main(){
    int a,pan,y,x;
    while(~scanf("%d",&a)){
        pan=0;y=0;
        while(a--){
            scanf("%d",&x);
            x-=y;
            if(x==-1)pan=1;
            else x%=2;
            if(x==1)y=1;
            else y=0;
        }
        if(x==0&&pan==0)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
