#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,cnt=1;
        scanf("%d",&n);
        for(int i=2;i<=n;i++){
            int tmp;
            scanf("%d",&tmp);
            if(tmp==2) cnt++;
            else cnt>0?cnt--:cnt++;
        }
        if(cnt!=0||n%2) printf("No\n");
        else printf("Yes\n");
    }
}