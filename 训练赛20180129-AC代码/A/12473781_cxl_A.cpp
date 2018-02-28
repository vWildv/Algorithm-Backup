//
//  main.cpp
//  b
//
//  Created by Mr chen on 2018/1/29.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;
bool judge(int y)
{
    if( (y%400==0) || (y%4==0 && y%100!=0) )
        return 1;
    return 0;
}
int main()
{
    
    int a;
    while(~scanf("%d",&a))
    {
        int ans = 0, i;
        for(i=a+1; ; i++)
        {
            if(judge(i))
            {
                ans += 2;
                ans %= 7;
            }
            else
            {
                ans++;
                ans %= 7;
            }
            if(ans==0 && (judge(a)==judge(i)))
                break;
        }
        printf("%d\n",i);
    }
    return 0;
}
