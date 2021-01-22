#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    int y;
    while(~scanf("%d",&y)){
        int d=0;
        int sum=0;
        bool flag=y%400==0||(y%4==0&&y%100!=0);
        y++;
        while(1){
            bool sign=y%400==0||(y%4==0&&y%100!=0);
            if(sign) sum+=366;
            else sum+=365;
            int d=sum%7;
            if(flag==sign&&d==0){
                printf("%d\n",y);
                break;
            }
            y++;
        }
    }
    return 0;
}
