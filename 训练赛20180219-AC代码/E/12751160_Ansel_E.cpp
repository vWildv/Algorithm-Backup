#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        if((a==b && a!=0) || a-b==1 || b-a==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
