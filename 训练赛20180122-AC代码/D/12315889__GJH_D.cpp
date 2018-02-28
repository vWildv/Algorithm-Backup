#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[1000005];
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        for (int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        int k;
        if (n%2==1) k=(n+1)/2;
        else k=(n+2)/2;
        cout<<a[k-1]<<endl;
    }
}
