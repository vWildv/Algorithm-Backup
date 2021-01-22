#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(~scanf("%d",&n)){
        int flag=0;
        for(int x=1;x<=100;x++){
            for(int y=x;y<=100;y++){
                for(int z=y;z<=100;z++){
                    if(x*x+y*y+z*z==n){
                        printf("%d %d %d\n",x,y,z);
                        flag=1;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
    }
}