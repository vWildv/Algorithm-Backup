#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long sum[1002],Max,n;
    int num[1002];
    while(cin>>n)
    {  if(n == 0)break;
        for(int i=0; i<n; i++)
            cin>>num[i];
        for(int i=0; i<n; i++)
            sum[i]=0;
        sum[0]=num[0];
        for(int i=1; i<n; i++)
        {
            Max=0;
            for(int j=0; j<i; j++)
            {
                if(num[j]<num[i]&&Max<sum[j])
                        Max=sum[j];
            }
            sum[i]=Max+num[i];
        }
        Max=0;
        for(int i=0; i<n; i++)
            if(sum[i]>Max) Max=sum[i];
        printf("%ld\n",Max);
    }
    return 0;
}
