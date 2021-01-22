#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int c[10005];

int main(){
    for(int i=2;i<10005;i++)
        for(int j=2*i;j<10005;j+=i) c[j]+=i;
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        int cnt=0;
        for(int i=min(a,b);i<=max(a,b);i++)
            if(c[i]==i-1) cnt++;
        printf("%d\n",cnt);   
    }
}