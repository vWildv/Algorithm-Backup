//
//  main.cpp
//  f2
//
//  Created by Mr chen on 2018/1/22.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include<stdio.h>
#include<string>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int b[30100], a[30100], n;
    while(~scanf("%d",&n))
    {
        int res = 0, i, j;
        for(i = 0; i < n; i ++)
        {
            scanf("%d",&a[i]);  b[i] = 1;
            for(j = i - 1; j >= 0; j --)
                if(a[i] > a[j] && b[j] + 1 > b[i])
                {
                    b[i] = b[j] + 1;
                }
            res = res > b[i] ? res : b[i];
        }
        printf("%d\n",res);
    }
    return 0;
}
