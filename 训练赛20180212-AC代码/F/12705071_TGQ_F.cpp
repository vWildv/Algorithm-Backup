#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int sum = 0;
    int a;
    scanf("%d%d",&n,&j);
    for( i = 0; i < n; i++ ){
        scanf("%d",&a);
        sum+=a;
    }
    int k;
    k = sum+n-1;
    if( k == j ) printf("YES\n");
    else printf("NO\n");
}
