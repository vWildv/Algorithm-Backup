#include<bits/stdc++.h>
#define M(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long LL;
const int maxn = 10005;
int a[maxn];
LL n;
int k;
int bit[100];//保存nB
int vis[100005];//每一位的数量

int main()
{
//    freopen("in.txt","r",stdin);
    while(cin>>n>>k)
    {
        M(vis,0);
        M(bit,0);

        LL tmp = n;
        int cnt = 0;
        int num = 0;
        while(tmp>0)
        {
            if(tmp&1)
                num++;
            bit[cnt++] = tmp%2;
            tmp>>=1;
        }

        if(num>k) {
            puts("No");
            continue;
        }

        int last = 0;
        int pos = 0;
        for (int i=cnt-1; i>=0; --i) {
            if(bit[i])
                last = pos;
            vis[pos++] = bit[i];
        }

        pos = 0;
        while(num<k) {
            if(vis[pos]>k-num)
                break;
            num+=vis[pos];
            while(vis[pos]) {
                vis[pos]--;
                vis[pos+1]+=2;
            }
            pos++;
            last = max(last,pos);
        }
//        puts("************");
        while(num<k) {
            vis[last]--;
            num++;
            last++;
            vis[last]+=2;
        }
        puts("Yes");
//        printf("%d\n",cnt);
        for (int i=0;i<=last; ++i) {
            int val = cnt-i-1;
            while(vis[i]) {
                vis[i]--;
                printf(" %d",val);
            }
        }
        printf("\n");
    }
    return 0;
}
