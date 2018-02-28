#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#define N 1000000007
using namespace std;
int main()
{
    int testnum;
    while(cin>>testnum)
    {
        while(testnum--)
        {
            int n,k,i,j;
            cin>>n>>k;
            long long sum=0,num=0;
            for(i=1; i<=n; i++)
            {
                num=1;
                for(j=1; j<=k; j++)
                    num=num*i%N;
                sum=(sum+num)%N;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
