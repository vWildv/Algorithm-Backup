#include<cstdio>
#include<iostream>
#define MAXN 10010
using namespace std;

int a[MAXN],n;

inline int check(int now)
{
    int last=0;
    for(int i=1; i<n; i++)
    {
        int next=a[i]-last-now;
        if(next<0||next>1) return 0;
        last=now;
        now=next;

    }
    if(last+now!=a[n]) return 0;
    else return 1;

}

int main()
{
    scanf("%d",&n);
    for(int i=1; i<=n; i++) scanf("%d",&a[i]);
    printf("%d\n",check(0)+check(1));
    return 0;

}
