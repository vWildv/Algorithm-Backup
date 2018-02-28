#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
bool jug(int x){
  if (x%4 == 0 && x%100!=0 || x%400 == 0 ){
    return true;
  }else{
    return false;
  }
}
int main (){
    int y;
    int s;
    bool flag;
    while (~scanf("%d",&y)){
       if (jug(y)){
        flag=true;
        s=0;
        while (true){
           y++;
           if (jug(y)){
            s=s+2;
           }else{
            s=s+1;
           }
         if ( s%7==0 && jug(y)==flag){
            break;
         }
        }
       }
       else{
        flag=false;
        s=0;
        while (true){
            y++;
           if (jug(y)){
            s=s+2;
           }else{
            s=s+1;
           }
         if ( s%7==0 && jug(y)==flag){
            break;
         }
       }
       }

     printf("%d\n",y);
    }

  return 0;
}