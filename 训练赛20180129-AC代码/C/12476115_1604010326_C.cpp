#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
int n,a,b;
while(~scanf("%d%d%d",&n,&a,&b))
{
    if(b<0)
    {
        int bb=abs(b);
        int u=bb%n;
        u=n-u;
        u=u%n;
        a+=u;
    }
    else
    {
        b=b%n;
        a+=b;
    }
    printf("%d\n",a>n?a%n:a);
}


}

