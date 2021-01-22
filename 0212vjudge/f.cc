#include <map>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,x;
    scanf("%d%d",&n,&x);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        x-=tmp;
    }
    x==n-1?printf("YES\n"):printf("NO\n");
}