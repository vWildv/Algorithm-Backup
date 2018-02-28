#include<stdio.h>
#include<stdlib.h>
#include<map>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<string.h>
using namespace std;
map<int,int>q;
int a[1000000];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        q.clear();
        int num=0;
        int p=0;
        for(int i=0; i<n; i++)
        {
            int b;
            scanf("%d",&b);
            if(q[b]!=-1)
            {
                q[b]++;
            }
            if(q[b]>=(n+1)/2)
            {
                num++;
                a[p]=b;
                p++;
                q[b]=-1;
            }
        }
        if(num==0)
        {
            printf("\n");
        }
        else
        {
            for(int i=0; i<num; i++)
            {
                if(i==num-1)
                {
                    printf("%d\n",a[i]);
                }
                else
                {
                    printf("%d ",a[i]);
                }
            }
        }
    }
}
