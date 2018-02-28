#include<stdio.h>
int chark(int a)
{
    if(a%400 == 0 || (a%4==0 && a%100 != 0))
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
    int y;
    while(~scanf("%d",&y))
    {
        int ans;
        ans = y+1;
        int p=(365+chark(ans))%7;
        while(p!=0 || chark(y) != chark(ans))
        {
            p=(p+365+chark(++ans))%7;
        }

        printf("%d\n",ans);
    }

}
