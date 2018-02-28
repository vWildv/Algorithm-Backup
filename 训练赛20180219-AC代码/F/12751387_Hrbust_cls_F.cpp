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
    int N,P,Q;
    while(cin>>N>>P>>Q){
        int mi;
        if(N&1){
            mi=(2*N+3)/4;
            if(P>0) P--;
            if(Q>0) Q--;
            mi+=(P+Q+3)/4;

        }
        else{
            mi=(2*N+P+Q+3)/4;
        }
        cout<<mi<<endl;
    }
    return 0;
}

