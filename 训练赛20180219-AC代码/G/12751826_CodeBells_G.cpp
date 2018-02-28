#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        int minn=100000000;
        int i,j;
        int sum=0;
        for(i=1;i<=n;i++)
        {
            sum=(int)((i*k)*9.0/10+0.5);
            if(n%i==0) sum*=n/i;
            else {
                sum*=n/i;
                sum+=(int)((n%i)*k*9.0/10+0.5);
            }
            minn=min(sum,minn);
        }
        printf("%d\n",minn);
    }
}
