#include<bits/stdc++.h>
using namespace std;
int zs(long long n)
{
    for(long long i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long n;
    while(cin>>n)
    {
        long long a,b,c;
        if(n%2==0)
        {
            n-=2;
            long long i,j;
            for(i=n-2,j=2; i>=n/2&&j<=n/2; i--,j++)
            {
                if(zs(i)&&zs(j))
                {
                    cout<<2<<' '<<i<<' '<<j<<endl;
                    break;
                }
            }
        }
        else
        {
            n-=3;
            long long i,j;
            for(i=n-2,j=2; i>=n/2&&j<=n/2; i--,j++)
            {
                if(zs(i)&&zs(j))
                {
                    cout<<3<<' '<<i<<' '<<j<<endl;;
                    break;
                }
            }
        }
    }
}
