#include<stdio.h>
#include<string.h>
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,flag=0,temp;
    while(~scanf("%d",&n))
    {
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        printf("%d\n",a[(n+1)/2]);
    }
    return 0;
}
