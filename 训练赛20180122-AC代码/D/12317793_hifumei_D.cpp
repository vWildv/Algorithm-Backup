#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
int a[maxn];

int main()
{
    int n;
    while(~scanf("%d",&n)){
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        sort(a+1,a+n+1);
        printf("%d\n",a[(n+1)/2]);
    }
    return 0;
}
