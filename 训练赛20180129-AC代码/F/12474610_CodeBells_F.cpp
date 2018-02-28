#include<stdio.h>
#include<iostream>
#include<string.h>
#include<queue>
#include<math.h>
#include<algorithm>
#define maxn 1005
#define ll long long int
using namespace std;

int judge(int x1,int y1,int x2,int y2,int x3,int y3)
{
    return (x2-x1)*(y3-y2)-(y2-y1)*(x3-x2)>0;
}
int main()
{
    int x[maxn],y[maxn];
    int n;
    while(~scanf("%d",&n))
    {
        for(int i= 0; i<=n; i++)
            scanf("%d%d",&x[i],&y[i]);
        int sum;
        for(int i = 1; i < n; i++)
        {
            sum+= judge(x[i - 1], y[i - 1], x[i], y[i], x[i + 1], y[i + 1]);
        }
        printf("%d\n", sum);
    }
}