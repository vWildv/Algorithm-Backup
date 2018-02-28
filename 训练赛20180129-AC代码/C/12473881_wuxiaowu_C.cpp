#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b;
    while(cin>>n>>a>>b)
    {
        int k=(a+b)%n;
        if(k<=0)
        {
            k=n+k;
        }
        printf("%d\n",k);


    }
}
