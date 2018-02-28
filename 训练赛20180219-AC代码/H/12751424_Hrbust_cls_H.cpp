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

bool prime(int n)
{
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    int N;
    while(cin>>N){
        if(N&1){
            cout<<3;
            N-=3;
        }
        else{
            cout<<2;
            N-=2;
        }
        for(int i=2;;i++){
            if(prime(i)&&prime(N-i)){
                cout<<' '<<i<<' '<<N-i<<endl;
                break;
            }
        }
    }
    return 0;
}

