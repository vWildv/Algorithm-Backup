#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n,tmp;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&tmp);
    int cnt=1;
    while(n>1){
        n/=2;
        ++cnt;
    }
    printf("%d\n",cnt);
}