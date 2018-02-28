#include<stdio.h>

int test_leap_years(int year)
{
    if(year%400 == 0 || (year%4==0 && year%100!=0))
    {
        return 1;//闰年
    }
    else
    {
        return 0;//平年
    }


}


int main()
{
    int y = 0;
    while(scanf("%d", &y) != EOF)
    {
        int flag1 = 0, flag2 = 0;
        int num = 0;

        flag1 = test_leap_years(y);


        for(y = y + 1; ; y++)
        {



            num = num + 1;
            flag2 = test_leap_years(y);

        if(flag2 == 1)
        {
            num = num + 1;
        }


        num  = num % 7;

        if(num == 0 && flag1 == flag2)
        {
            printf("%d\n", y);
            break;
        }
        }


    }



    return 0;
}