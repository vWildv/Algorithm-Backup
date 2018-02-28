#include <iostream>
#include <cstdio>

using namespace std;

int f[50],n;

bool find();

int main()
{
    f[0]=2;
    f[1]=3;
    for(int i=2; i<44; i++) //44是测试测出来的
    {
        f[i]=f[i-1]+f[i-2];
    }
    while(scanf("%d",&n),n)
    {
        if(find())  puts("Second win");
        else    puts("First win");
    }
    return 0;
}
bool find()
{
    int l=0,r=43,mid;
    while(l<=r)
    {
        mid=(l+r)>>1;
        if(n==f[mid])   return true;
        else if(n<f[mid])   r=mid-1;
        else    l=mid+1;
    }
    return false;
}
