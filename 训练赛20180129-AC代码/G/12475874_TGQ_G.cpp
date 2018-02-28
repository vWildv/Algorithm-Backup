#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    int i, n, j = 0,k = 0;
    int arr[1005] = {0}, brr[1005] = {0};
    scanf("%d",&n);
    for( i = 0; i < n ; i++ ){
        scanf("%d",&arr[i]);
        brr[i] = 1;
    }
    sort(arr,arr+n);
    for( i = 0; i < n ; i++ ){
        if(arr[i] == arr[i+1])
            brr[j]++;
        else
            j++;
    }
    sort(brr,brr+j);
    for( i = 0; i < j-1; i++ )
    k += brr[i];
    printf("%d",k);
}
