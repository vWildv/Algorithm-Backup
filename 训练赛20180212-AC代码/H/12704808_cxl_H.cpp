//
//  main.cpp
//  h
//
//  Created by Mr chen on 2018/2/12.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int n, t, i, q = 0, a;
    while(~scanf("%d %d", &n, &t))
    {
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &a);
            t -= (86400 - a);
            if (t <= 0 && q == 0)
            {
                q = i;
            }
        }
        printf("%d\n", q);
    }return 0;
}
