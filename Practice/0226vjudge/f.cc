#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x,hh,mm;
    scanf("%d%d%d",&x,&hh,&mm);
    int ans=0;
    while(hh%10!=7&&mm%10!=7){
        ans++;
        mm-=x;
        if(mm<0){
            hh--;
            mm+=60;
        }
        if(hh<0) hh=23;
    }
    printf("%d\n",ans);
}