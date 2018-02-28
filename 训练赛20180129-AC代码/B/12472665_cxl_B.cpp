//
//  main.cpp
//  a
//
//  Created by Mr chen on 2018/1/29.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <math.h>
using namespace std;
int gcd(int a,int b)
{
    int c,t;
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    while(a%b)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return b;
}
int main()
{
    long long n,p,q,a,b;
    while(~scanf("%lld %lld %lld %lld %lld",&n,&a,&b,&p,&q))
    {
        long long lcm=(long long)a*b/(long long)gcd(a,b);
        long long x=n/a,y=n/b,z=n/lcm;
        long long sum=x*p+y*q;
        if(z)
            sum=(p>q)?sum-z*q:sum-z*p;
        printf("%lld\n",sum);
    }
    return 0;
}
