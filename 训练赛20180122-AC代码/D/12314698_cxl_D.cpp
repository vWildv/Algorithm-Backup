//
//  main.cpp
//  序列去重
//
//  Created by Mr chen on 2018/1/21.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <math.h>
#include<algorithm>
using namespace std;
int main()
{
        int n;
        while(~scanf("%d",&n))
        {
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int coun=0;
        for(int i=0;i<n-1;)
        {
            int j=i+1,step=1;
            for(j;a[i]==a[j];j++)
            {
                a[j]=5001;
                step++;
                coun++;
                if(step>=(n+1)/2)
                {
                    printf("%d",a[i]);
                    break;
                }
            }
            i=i+step;
        }
            printf("\n");
    }
    return 0;
}
