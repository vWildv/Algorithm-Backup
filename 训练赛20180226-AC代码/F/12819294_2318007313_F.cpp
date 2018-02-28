#include<cstdio>
#include<cstring>
int chark(int a,int b)
{
    if(a%10 == 7 || b%10 == 7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x;
    while(~scanf("%d",&x))
    {
        int hh,mm;
        int ans;
        scanf("%d%d",&hh,&mm);
        for(int i=0; ; i++)
        {
            if(chark(hh,mm))
            {
                printf("%d\n",i);
                break;
            }
            mm-=x;
            if(mm<0)
            {
                hh--;
                mm += 60;
            }
            if(hh<0)
            {
                hh+=24;
            }
        }
    }
    return 0;
}
