#include <iostream>
#include <cstdio>
#include <algorithm>
#include<string.h>
using namespace std;

int flag[1050];
int flag2[1050];
int c[1050];

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int num;
        int sum=0;
        memset(flag,0,sizeof(flag));
        memset(c,0,sizeof(c));
        int n,m;
        int cnt = 0;
        scanf("%d%d",&n,&m);
        while(m--)
        {

            int h,mi;
            char res[50];
            scanf("%d %d:%d %s",&num,&h,&mi,res);
            int time = mi+h*60;
            if(!flag[num]&&res[0]=='A'&&res[1]=='C')
            {
                sum += time;
                flag[num] = 1;
                cnt++;
            }
            else if(!flag[num])
            {
                sum += 20;
                c[num]++;
            }
            if(cnt == n)
                break;
        }
        for(int i = 1001; i <= 1013; i++)
        {
            if(!flag[i])
                sum -= (c[i]*20);
        }
        printf("%d %d\n",cnt,sum);

    }
    return 0;
}

