#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;


int a[200005];
int maxnum[200005];

int main ()
{
    int m,d;
    while(~scanf("%d%d",&m,&d))
    {
        int cnt=0,t=0,num, command;
        while(m--)
        {
            getchar();
            command=getchar();
            scanf("%d",&num);
            if (command=='A')
            {
                int tmp=(num+t)%d;
                a[cnt++]=tmp;
                for (int ii=cnt-1;ii>=0;--ii)
                {
                    if (maxnum[ii]<tmp)
                    {
                            maxnum[ii]=tmp;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                t=maxnum[cnt-num];
                printf("%d",t);
                putchar('\n');
            }
        }
    }
}