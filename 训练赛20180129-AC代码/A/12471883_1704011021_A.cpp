#include<stdio.h>
int nian(int n)
{
    if(n%400==0||n%4==0&&n%100!=0)
    {
        return 366;
    }
    else
    {
        return 365;
    }
}
int main()
{
    int y;
    while(~scanf("%d",&y))
    {
        int ans=y+1;
        int q=nian(ans)%7;
        while(q!=0||nian(y)!=nian(ans))
        {
            q=(q+nian(++ans))%7;
        }
        printf("%d\n",ans);

    }
}
