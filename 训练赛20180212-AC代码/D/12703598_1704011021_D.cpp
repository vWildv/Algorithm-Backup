#include<bits/stdc++.h>
using namespace std;
long long int qiuhe(int i)
{
    long long h=1,num=0;
    while(i/h)
    {
        num=num+(i/h)%10;
        h*=10;
    }
    return num;
}

int main()
{
    long long int n;
    while(~scanf("%lld",&n))
    {
        long long int m=0;
        for(long long int i=19; i<=1e9; i++)
        {
            if(qiuhe(i)==10)
            {
                m++;
                if(m==n)
                    {
                        printf("%lld\n",i);
                        break;
                    }
            }
        }
    }
}
