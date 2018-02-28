#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int n,i,j,k;
    while(~scanf("%d",&n))
    {
        int arr[1000010];
        for(i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        printf("%d\n",arr[(n+1)/2]);
    }
    return 0;
}