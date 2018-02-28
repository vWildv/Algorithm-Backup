#include<stdio.h>
int a[10001];
void qq()
{

    int k=1,i;
for( i=19;;i++)
{
    int sum=0,u=i;
    while(u)
    {
        sum+=(u%10);
        u/=10;
    }
    if(sum==10)
    {
        a[k++]=i;

    }
    if(k>10000)break;
}
}
int main()
{
qq();
int n;
    while(~scanf("%d",&n))
    {
        printf("%d\n",a[n]);
    }
}
