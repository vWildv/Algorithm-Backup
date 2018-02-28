#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1000000;
int a[maxn];
int main ()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        cout<<a[((n+1)/2)-1]<<endl;

    }
}
