#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0, h = 0;

    int a[100005];


    while(scanf("%d", &n) != EOF)
    {
        int num = 0;
        memset(a, 0, sizeof(a));//必须放到里面才对，每次输入一组数据后都要清空，放在定义数组附件是不行的！！！
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &h);


        int j = 0;
        for(j = 0; j <= num; j++)
        {
            if(a[j] >= h)
            {
                a[j] = h;

                break;
            }
        }
        if(j > num)
        {
            num++;
           a[num] = h;
        }
        }
        printf("%d\n", num);
    }
    return 0;
}