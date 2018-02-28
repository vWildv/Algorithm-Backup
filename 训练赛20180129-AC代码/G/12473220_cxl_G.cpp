//
//  main.cpp
//  g
//
//  Created by Mr chen on 2018/1/29.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int a[1005],b[1005];
        int ans=0;
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        sort(b,b+1005,cmp);
        for(int i=1;i<1005;i++)
        {
            ans+=b[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
