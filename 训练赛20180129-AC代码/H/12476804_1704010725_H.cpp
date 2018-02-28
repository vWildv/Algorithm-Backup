#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

const long long N=(10000000000LL);
map<int,int> x;
map<int,int> y;
map<long long,int> xy;

int main(int argc, char const *argv[]) {
    int n;
    while(~scanf("%d",&n)){
        x.clear();y.clear();xy.clear();
        long long res=0;
        while(n--){
            int tmpx,tmpy;
            scanf("%d%d",&tmpx,&tmpy);
            res+=x[tmpx]++;
            res+=y[tmpy]++;
            res-=xy[tmpx*N+tmpy]++;
        }
        printf("%lld\n",res);
    }
    return 0;
}
