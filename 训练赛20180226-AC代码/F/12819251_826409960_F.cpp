#include<bits/stdc++.h>
#define M(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long LL;

bool check(int a)
{
    while(a) {
        if(a%10==7)
            return 1;
        else {
            a/=10;
        }
    }
    return 0;
}
int main()
{
//    freopen("in.txt","r",stdin);
    int x,h,m;
    while(cin>>x>>h>>m) {
        int time = h*60+m;
        int ans = 0;
        while(1) {
            if(check(h)||check(m)) {
                break;
            }
            else {
                ++ans;
                time-=x;
                if(time<0)
                    time+=24*60;
                h = time/60;
                m = time%60;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
