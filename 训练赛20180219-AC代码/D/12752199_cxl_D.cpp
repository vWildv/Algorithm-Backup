//
//  main.cpp
//  d2
//
//  Created by Mr chen on 2018/2/19.
//  Copyright © 2018年 Mr chen. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
typedef long long ll;
const ll mod=1e9+7;
ll my_pow(ll n,int k)
{
    ll p=1;
    while(k--)
        p=p*n%mod;
    return p;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        ll ans=0;
        for(int i=1;i<=a;i++)
        {
            ans=(ans+my_pow(i,b))%mod;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
