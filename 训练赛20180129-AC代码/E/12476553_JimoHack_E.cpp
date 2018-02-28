#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>
#define TRUE 9999
#define Init0(x) memset(x,sizeof(x),0);
#define Init_(x) memset(x,sizeof(x),-1);
using namespace std;
typedef long long int int64;
int main()
{
    int n,a,b,m;
    while(~scanf("%d%d",&n,&m))
    {
        map<int,int> isok;
        vector<int> out;
        for(int i=0;i<n;++i)
         {
                 int tmp;
                 scanf("%d",&tmp);
                 isok[tmp]=TRUE;
         }
        int cost=0;
        for(int i=1;cost<=m;++i)
        {
                if(isok[i]!=TRUE)
                {
                        cost += i;
                        out.push_back(i);
                }

        }
        printf("%d\n",out.size()-1);
        for(int i=0;i<out.size()-1;++i)
        {
                printf("%d",out[i]);
                if(i!=out.size()-2) printf(" ");
        }
        putchar('\n');
    }
}

