#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int n,x;
    int a[100005];
    while(cin >> n >> x)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int sum = n-1;
        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }
        if(sum == x)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
