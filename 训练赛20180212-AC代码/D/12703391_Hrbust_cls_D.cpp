#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 1e9;

int pern[10005];

int main()
{
    ios::sync_with_stdio(false);
    int cnt=1;
    for(int i=1;i<=MAXN;i++){
        int t=i;
        int sum=0;
        while(t){
            sum+=t%10;
            t/=10;
        }
        if(sum==10)
            pern[cnt++]=i;
        if(cnt>10000) break;
    }
    int k;
    while(cin>>k){
        cout<<pern[k]<<endl;
    }
    return 0;
}
