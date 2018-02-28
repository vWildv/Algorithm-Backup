#include<stdio.h>
#include<iostream>
#include<string.h>
#include<queue>
#include<math.h>
#include<algorithm>
#define maxn 1005
#define ll long long int
using namespace std;
#define N 100010
struct Par
{
    char name[maxn];
    int street;
    int score;
}par[N];
bool cmp(Par a,Par b)
{
    if(a.street==b.street)
        return a.score>b.score;
    return a.street<b.street;
}
struct tem
{
    char name1[15];
    char name2[15];
    int k;
} temp[N];
int main()
{
    int t,n,m,i,j,k;
    while(~scanf("%d%d",&n,&m))
    {
        for(i=0; i<n; i++)
            scanf("%s%d%d",par[i].name,&par[i].street,&par[i].score);
        sort(par,par+n,cmp);
        int flag=0;
        i=1;
        j=0;
        while(i<=m&&j<n)
        {
            if(par[j].street!=i)
            {
                j++;
                continue;
            }
            if(par[j].street==i)
            {
                if(par[j+1].street==i)
                {
                    if(par[j+2].street==i)
                    {
                        if(par[j+2].score==par[j+1].score)
                            flag=1;
                    }
                }
                else
                    flag=1;
            }
            if(flag)
                temp[i].k=1;
            else
            {
                strcpy(temp[i].name1,par[j].name);
                strcpy(temp[i].name2,par[j+1].name);
            }
            i++;
            flag=0;
        }
        for(i=1; i<=m; i++)
        {
            if(temp[i].k)
                printf("?\n");
            else
                printf("%s %s\n",temp[i].name1,temp[i].name2);
        }
    }
}
