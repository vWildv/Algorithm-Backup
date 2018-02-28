
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<queue>
#include<math.h>
#include<algorithm>
#define maxn 1005
#define ll long long int
using namespace std;

int pic[maxn];
int visit[maxn];
int main()
{
    int n,num;
    while(~scanf("%d",&n))
    {
        num=0;
        for(int i=0;i<n;i++)
            scanf("%d",&pic[i]);
        sort(pic,pic+n);
        memset(visit,0,sizeof(visit));
        int temp;
        for(int i=0;i<n;i++)
        {
            temp=pic[i];
            for(int j=i+1;j<n;j++)
            {
                if(pic[j]>temp&&visit[j]==0)
                {
                    num+=1;
                    visit[j]=1;
                    break;
                }
            }
        }
        printf("%d\n",num);
    }
}
