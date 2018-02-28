//
//  main.cpp
//  a
//
//  Created by Mr chen on 2018/1/22.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include<stdio.h>
int table[1005];
int findtable(int x)
{
    if(table[x]==x) return x;
    else return findtable(table[x]);
}
void join(int x,int y)
{
    int tabx=findtable(x);
    int taby=findtable(y);
    if(tabx!=taby)
        table[tabx]=taby;
}
int main()
{
    int t,a,b,n,m;
    scanf("%d",&t);
    while(t--)
    {
        int sum=0;
        scanf("%d %d",&n,&m);
        for(int i=1; i<=n; i++)
            table[i]=i;
        for(int i=1; i<=m; i++)
        {
            scanf("%d %d",&a,&b);
            join(a,b);
        }
        for(int i=1; i<=n; i++)
        {
            if(table[i]==i)
                sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
