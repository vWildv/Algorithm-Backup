//
//  main.cpp
//  e2
//
//  Created by Mr chen on 2018/2/19.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;
int judge(int n,int m)
{
    int a=abs(n-m);
    if(a>=2||(n==0&&m==0))
        return 0;
    else
        return 1;
}
int main()
{
    int n,m;
    while(~scanf("%d %d",&n,&m))
    {
        if(judge(n,m))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
