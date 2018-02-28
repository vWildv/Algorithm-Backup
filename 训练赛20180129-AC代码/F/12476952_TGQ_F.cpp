#include <stdio.h>
int main()
{
    int i, n;
    int arr[3000] = {0};
    scanf("%d",&n);
    for( i = 0; i < 2*n+2 ; i++ )
        scanf("%d",&arr[i]);

    printf("%d",(n-4)/2);
}
