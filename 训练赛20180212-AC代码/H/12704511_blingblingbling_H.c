#include<stdio.h>
int main()
{
    int n,t,a[100],m=0,i,s=0;
    scanf("%d%d",&n,&t);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        m=i;
        s=s+(86400-a[i]);
        if(s>=t)
            break;

    }
    printf("%d",m);



}
