#include<stdio.h>
int main(){
    int tui,h,m;
    while(~scanf("%d%d%d",&tui,&h,&m)){
        int bu=0;
        int s=m%10;
        int ge=h%10;
        while(ge!=7&&s!=7){
            bu++;
            m-=tui;
            while(m<0){
                m+=60;
                h--;
                if(h<0)h+=24;
                ge=h%10;
            }
            s=m%10;
        }
        printf("%d\n",bu);
    }
    return 0;
}
