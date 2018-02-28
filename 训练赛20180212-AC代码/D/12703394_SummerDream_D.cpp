#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    long long a[10005];
    int n=0;
    long long i,sum;
    for(i=19;;i++)
    {
        sum=0;
        int t=i;
        while(t)
        {
            sum+=t%10;
            t/=10;
        }
//        cout<<sum<<endl;
        if(sum==10)a[n]=i,n++;
        if(n>=10002)break;
    }
    int testnum;
    while(cin>>testnum)
    {
        cout<<a[testnum-1]<<endl;
    }
    return 0;
}

