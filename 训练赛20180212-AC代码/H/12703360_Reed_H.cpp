#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;
int a[105];

int main()
{
    int n,t;
    int tmp=0;
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        tmp=tmp+86400-a[i];
        if(tmp>=t)
        {
            printf("%d\n",i+1);
            break;
        }
    }
    return 0;
}
