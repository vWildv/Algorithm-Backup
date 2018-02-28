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
        }
        if(n&1){
            cout<<"No\n";
            continue;
        }
        int sum=-1;
        for(int i=2;i<=n;i++){
            if(a[i]==2) sum--;
            else if(sum<0) sum++;
        }
        if(sum==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}

