#include<stdio.h>
int pan(int a){
    if(a%400==0)return 366;
    if(a%4==0&&a%100!=0)return 366;
    return 365;
}
int main(){
    int y;
    while(~scanf("%d",&y)){
        int tian=pan(y);
        int k=tian;
        while(1){
            y++;
            if(tian==pan(y)&&k%7==0)break;
            k+=pan(y);
        }
        printf("%d\n",y);
    }
    return 0;
}
