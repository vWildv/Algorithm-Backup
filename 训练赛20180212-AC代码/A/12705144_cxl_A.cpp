//
//  main.cpp
//  A
//
//  Created by Mr chen on 2018/2/12.
//  Copyright © 2018年 Mr chen. All rights reserved.
//
#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n,i,a[200010];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<0)
        {
            break;
        }
        else if(a[i]%2==1)
        {
            a[i+1]--;
        }
    }
    if(i!=n-1)
    {
        printf("NO\n");
    }
    else
    {
        if(a[i]%2==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
