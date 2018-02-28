#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    int n,a,b;
    while(~scanf("%d%d%d",&n,&a,&b)){
        int tmp=(a-1+b)%n;
        int ans=(tmp+n)%n+1;
        printf("%d\n",ans);
    }
    return 0;
}
