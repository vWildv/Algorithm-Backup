#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    long long int a;
    while(~scanf("%lld%lld",&n,&x))
    {
        long long int sum=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a;
            sum+=a;
            if(i!=n)
                sum++;
        }
        if(sum==x) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
