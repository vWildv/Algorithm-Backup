#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,a,sum=0;
    cin>>n>>x;
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&a);
        sum+=a;
        if(i!=n) sum++;
    }
    printf("%s",sum==x?"YES\n":"NO\n");
}
