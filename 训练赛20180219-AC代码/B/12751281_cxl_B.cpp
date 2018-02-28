//
//  main.cpp
//  b2
//
//  Created by Mr chen on 2018/2/19.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#define N 1000001
int ans1[N];
int num[N];
#define INF 0x3f3f3f3f
using namespace std;
int gcd(int a,int b)
{
    int t;
    if(b>a)
    {
        t=a;
        a=b;
        b=t;
    }
    while(b)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main()
{
    int t;
    scanf("%d",&t);  
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&num[i]);
        }
        for(int i=2;i<=n;i++){
            ans1[i] = gcd(num[1],num[i]);
        }
        int a=INF,b=INF;
        for(int i=2;i<=n;i++){
            if(a>ans1[i]){
                b = a;
                a = ans1[i];
            }else if(b>ans1[i]){
                b = ans1[i];
            }
        }
        a = num[2];
        for(int i=3;i<=n;i++){
            a = gcd(a,num[i]);
            if(a==1) break;
        }
        printf("%d\n",max(a,b));
    }
}
