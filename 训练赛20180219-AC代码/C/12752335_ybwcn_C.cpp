#include<stdio.h>
int main(){
    int n,dian,cao;
    while(~scanf("%d",&n)){
        while(n--){
            int sheng=1;
            scanf("%d",&dian);dian--;
            while(dian--){
                scanf("%d",&cao);
                if(cao==1&&sheng>0)sheng--;
                else sheng++;
            }
            if(sheng==0)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
