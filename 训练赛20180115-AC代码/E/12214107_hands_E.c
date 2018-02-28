#include<stdio.h>
int min(int a,int b);
int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t>0)
    {
        int count1=0,count2=0,count3=0;
        scanf("%d %d",&m,&n);
        int i,j;
        for(i=n+1;i<=m;i++)
        {
            j=i;
            while(j%2==0)
            {
                count1++;
                j=j/2;
            }
        }
        int minnum,maxnum;
        minnum=min(n,m-n);
        maxnum=m-minnum;
        for(i=1;i<=minnum;i++)
        {
            j=i;
            while(j%2==0)
            {
                count2++;
                j=j/2;
            }
        }
        for(i=minnum+1;i<=maxnum;i++)
        {
            j=i;
            while(j%2==0)
            {
                count3++;
                j=j/2;
            }
        }
        printf("%d\n",count1-count2-count3);
        t--;
    }
}
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
