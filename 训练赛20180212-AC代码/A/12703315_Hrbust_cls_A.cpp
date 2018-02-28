#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 200010;

int a[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int flag=1;
        for(int i=n;i>=1;i--){
            if(a[i]<0){
                flag=0;
                break;
            }
            if(i>1){
                if(a[i]&1)
                    a[i-1]-=1;
            }
            else if(a[i]&1) flag=0;
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
