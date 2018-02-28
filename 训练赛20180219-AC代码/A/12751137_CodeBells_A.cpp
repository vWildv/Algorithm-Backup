#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define MAXN 10000
int t;
int hour,minute;
int n,m;
int ac[MAXN];
int times[MAXN];
int main()
{
    scanf("%d", &t);
    while(t--)
    {
        memset(times,0,sizeof(times));
        memset(ac,0,sizeof(ac));
        scanf("%d%d",&n,&m);
        while(m--)
        {
            int num;
            char judge[50];
            scanf("%d",&num);
            scanf("%d:%d",&hour,&minute);
            scanf(" %s",judge);
            if(ac[num])
            {
                continue;
            }
            if(judge[0]=='A')
            {
                times[num]+=(hour*60+minute);
                ac[num] = 1;
            }
            else
            {

                times[num]+= 20;
            }
        }
        int A=0,sum=0;
        for(int i=1001; i<=1000+n; i++)
        {
            if(ac[i])
            {
                sum+=times[i];
                A++;
            }
        }
        printf("%d %d\n",A,sum);
    }


}
