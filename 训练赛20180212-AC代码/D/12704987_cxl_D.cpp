//
//  main.cpp
//  D
//
//  Created by Mr chen on 2018/2/12.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
int a[1000005];
bool judge(int x)
{
    int sum=0;
    while(x)
    {
        sum+=x%10;
        x/=10;
    }
    if(sum==10)
        return true;
    else
        return false;
}
int main()
{
    
    int x=0;
    for(int i=0;i<=20000000;i++)
        if(judge(i))
            a[x++]=i;
    int k;
    while(~scanf("%d",&k))
    {
        printf("%d\n",a[k-1]);
    }
    return 0;
}
