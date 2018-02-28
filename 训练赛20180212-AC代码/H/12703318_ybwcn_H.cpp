#include<stdio.h>
int main(){
    int a,b;
    while(~scanf("%d%d",&a,&b)){
        int shi;
        int tian=1,du=0;
        while(a--){
            scanf("%d",&shi);
            shi=86400-shi;
            du+=shi;
            if(du<b)tian++;
        }
        printf("%d\n",tian);
    }
    return 0;
}
