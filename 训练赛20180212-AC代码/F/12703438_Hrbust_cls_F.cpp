#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 100010;

int a[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    int n,x;
    while(cin>>n>>x){
        int sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum+(n-1)!=x) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
