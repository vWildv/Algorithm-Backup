#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int b[100000];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int cnt=0;
        memset(b,0,sizeof(b));
        int j,a;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a);
            for(j=0; j<=cnt; j++)
            {
                if(b[j]>=a)
                {
                    b[j]=a;
                    break;
                }
            }
            if(j>cnt)
            {
                b[++cnt]=a;
            }
        }
        printf("%d\n",cnt);
    }
}
