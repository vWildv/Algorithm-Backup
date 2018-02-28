#include <bits/stdc++.h>
using namespace std;
const int maxn=1005;
long long C[maxn][maxn];

void get_C(int maxn)
{
    C[0][0] = 1;
    for(int i=1;i<=maxn;i++)
    {
        C[i][0] = 1;
        for(int j=1;j<=i;j++)
            C[i][j] = C[i-1][j]+C[i-1][j-1];
        //C[i][j] = (C[i-1][j]+C[i-1][j-1])%MOD;
    }
}

int main()
{
    int t;
    get_C(maxn);
    scanf("%d",&t);
    while(t--){
        int m,n;
        int cnt=0;
        scanf("%d%d",&m,&n);
        long long as=C[m][n];
//        printf("%lld\n",C[m][n]);
        for(int i=0;;i++){
            if((as>>i&1)==1)break;
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
