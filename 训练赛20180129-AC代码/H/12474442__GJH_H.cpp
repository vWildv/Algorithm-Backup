#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct E
{
    long long x,y;
} p[200005];

bool cmp1(E a,E b)
{
    if (a.x==b.x) return a.y<b.y;
    else return a.x<b.x;
}
bool cmp2(E a,E b)
{
    if (a.y==b.y) return a.x<b.x;
    else return a.y<b.y;
}

int main()
{
    long long n;
    cin>>n;
    for (long long i=0; i<n; i++)
        scanf("%d%d",&p[i].x,&p[i].y);

    sort(p,p+n,cmp1);

    long long ans=0;
    long long num=1,k=1;
    for (long long i=1; i<n; i++)
    {
        if (p[i].x==p[i-1].x)
        {
            num++;
            if (p[i].y==p[i-1].y) k++;
            else
            {
                ans-=(k-1)*k/2;
                k=1;
            }
        }
        else
        {
            ans+=(num-1)*num/2;
            num=1;
            ans-=(k-1)*k/2;
            k=1;
        }
    }
    ans-=(k-1)*k/2;
    ans+=(num-1)*num/2;

    sort(p,p+n,cmp2);

    num=1;
    for (long long i=1; i<n; i++)
    {
        if (p[i].y==p[i-1].y) num++;
        else
        {
            ans+=(num-1)*num/2;
            num=1;
        }
    }
    ans+=(num-1)*num/2;
    cout<<ans<<endl;
}
