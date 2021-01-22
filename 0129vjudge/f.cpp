#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    while(~scanf("%d",&n)){
        int a,b;
        for(int i=0;i<=n;i++) scanf("%d%d",&a,&b);
        printf("%d\n",(n-4)/2);
    }
    return 0;
}
