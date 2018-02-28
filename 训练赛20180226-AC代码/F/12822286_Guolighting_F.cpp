#include<iostream>
#include<cstdio>
using namespace std;
int isy(int x,int h,int m){
    int y=0,i;
    if(h%10==7||m%10==7){
       return 0;
    }
    else {
       while(h%10!=7&&m%10!=7){
            y++;
         m=m-x;
         if(m<0){
            m=m+60;
            h--;
         }
         if(h<0)
          h=h+24;
          if(h%10==7||m%10==7)
            return y;
       }
    }
}
main(){
    int x,hh,mm;
    scanf("%d",&x);
    scanf("%d%d",&hh,&mm);
    printf("%d",isy(x,hh,mm));
}
