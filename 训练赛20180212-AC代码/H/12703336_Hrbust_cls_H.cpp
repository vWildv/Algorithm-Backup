#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 105;

int a[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    int n,t;
    while(cin>>n>>t){
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int d=1;d<=n;d++){
            t-=(86400-a[d]);
            if(t<=0){
                cout<<d<<endl;
                break;
            }
        }
    }
    return 0;
}
