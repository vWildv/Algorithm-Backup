#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
#include<map>
#define LL long long
using namespace std;
const int MAXN = 100010;
const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    int N,K;
    while(cin>>N>>K){
        int tmp=0;
        int ans=0;
        for(int i=1;i<=N;i++){
            tmp+=K;
            if(tmp%10>=6){
                tmp*=9;
                ans+=(tmp%10>=5)?(tmp/10+1):(tmp/10);
                tmp=0;
            }
        }
        tmp*=9;
        ans+=(tmp%10>=5)?(tmp/10+1):(tmp/10);
        cout<<ans<<endl;
    }
    return 0;
}

