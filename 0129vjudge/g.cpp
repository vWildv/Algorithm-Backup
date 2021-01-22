#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int a[1005];

int main(int argc, char const *argv[]) {
    int n;
    while(~scanf("%d",&n)){
        int tmp=0;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            scanf("%d",&tmp);
            a[tmp]++;
        }
        printf("%d\n",n-(*max_element(a,a+1001)));
    }
    return 0;
}
