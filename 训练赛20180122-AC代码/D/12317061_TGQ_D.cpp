#include <iostream>
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;
int a[1000000];
int main()
{
    int n,i,j,k;
    while(~scanf("%d",&n))
    {
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        printf("%d\n",a[(n+1)/2]);
    }
}
