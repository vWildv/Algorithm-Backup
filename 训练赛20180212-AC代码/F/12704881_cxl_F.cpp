//
//  main.cpp
//  f
//
//  Created by Mr chen on 2018/2/12.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include<iostream>
#include<string.h>
#include<string>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long n,x,a,sum = 0;
    while(~scanf("%lld%lld",&n,&x))
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&a);
            sum+=a;
            if(i!=n) sum++;
        }
        if(sum==x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
