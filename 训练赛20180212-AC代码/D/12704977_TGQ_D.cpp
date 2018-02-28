#include <stdio.h>
int PD(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    if(sum==10)return 1;
    else return 0;
}
int main()
{
    int i;
    int n;
    int j = 0;
    int arr[100005] = {0};
    for( i = 0; i <= 15000000; i++ )
        if( PD(i) )
            arr[j++]=i;
    scanf("%d",&n);
    printf("%d",arr[n-1]);

}
