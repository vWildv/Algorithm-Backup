#include<stdio.h>
int main()
{
    int n;
    int t;
    int a;
    int ans = 0;
    scanf("%d%d",&n,&t);
    for( int i = 1; i <= n; i++ ){
        scanf("%d",&a);
        t -= ( 86400-a );
        if( t <= 0 && ans==0 ) ans = i;
    }
    printf("%d\n",ans);
}
