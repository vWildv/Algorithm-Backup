#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
#include <map>
#define  TRUE 9999
using namespace std;
int out[1000000];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int p=0;
        map<int,int> cnt;
        map<int,int> isok;
        for(int i=0;i<n;++i)
        {
            int tmp;
            scanf("%d",&tmp);
            ++cnt[tmp];
            if(cnt[tmp]>=(n+1)/2&&isok[tmp]!=TRUE)
            {
                isok[tmp]=TRUE;
                out[p++]=tmp;
            }
        }
        for(int i=0;i<p;++i)
        {
            printf("%d",out[i]);
            if(i!=p-1) printf(" ");
        }
        printf("\n");
    }
}
