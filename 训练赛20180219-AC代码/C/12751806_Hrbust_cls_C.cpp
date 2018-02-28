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
    int T,n;
    cin>>T;
    while(T--){
        cin>>n;
        vector<int>a(n+1);
        for(int i=2;i<=n;i++){
            cin>>a[i];
            if(a[i]==2) a[i]=-1;
        }
        if(n&1){
            cout<<"No\n";
            continue;
        }
        int sum=-1;
        for(int i=n;i>=2;i--){
            sum+=a[i];
            if(sum<-1) break;
        }
        if(sum>=0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}

