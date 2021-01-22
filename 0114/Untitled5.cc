#include <bits/stdc++.h>
using namespace std;

map<int,int> a,b;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        a[y-x]++;
        b[y+x]++;
    }
    long long sum=0;
    for(int i=-1000;i<=2000;i++){
       sum+=a[i]*(a[i]-1)/2;
       sum+=b[i]*(b[i]-1)/2;
    }
    printf("%lld\n",sum);
}
