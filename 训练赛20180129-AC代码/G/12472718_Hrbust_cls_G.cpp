#include<bits/stdc++.h>
#define LL long long
using namespace std;

int re[1005];

int main()
{
    int n;
    while(cin>>n){
        memset(re,0,sizeof(re));
        int a;
        int msame=0;
        for(int i=1;i<=n;i++){
            cin>>a;
            msame=max(msame,re[a]++);
        }
        cout<<n-1-msame<<endl;
    }
    return 0;
}

