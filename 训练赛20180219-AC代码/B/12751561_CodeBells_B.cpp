#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
int GCD(int a,int b)
{
    int t;
    if(b>a)
    {
        t=a;
        a=b;
        b=t;
    }
    while(b)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main()
{
    int num[maxn];
    int temp[maxn];
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int i,j;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
        int now,maxx=0;
        temp[0]=-1;
        temp[1]=-1;
        for(i=0;i<n;i++)
        {
            if(i==0) now=num[1];
            else now=num[0];
            for(j=0;j<n;j++)
            {
                if(j==i) continue;
                now=GCD(num[j],now);
                if(now<=maxx) break;
                if(j==i+1)
                    if(now==temp[j])
                    break;
                if(j==i+2)
                    temp[j]=now;
            }
            if(maxx<now) maxx=now;
        }
        printf("%d\n",maxx);
    }
}