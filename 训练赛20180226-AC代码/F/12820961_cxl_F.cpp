//
//  main.cpp
//  ff
//
//  Created by Mr chen on 2018/2/26.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <stdio.h>
#include <math.h>
using namespace std;
bool judge(int a, int b){
    if (a % 10 == 7 || b % 10 == 7)
        return true;
    return false;
}
int main(){
    int x;
    while(~scanf("%d", &x))
    {
    int h, m;
    scanf("%d%d", &h, &m);
    int time = 0;
    while (true)
    {
        if (judge(h, m))
            break;
        time ++;
        m -= x;
        if (m < 0)
        {
            m += 60;
            h --;
            if (h < 0)
            {
                h += 24;
            }
        }
    }
    printf("%d\n", time);
    }
    return 0;
}
