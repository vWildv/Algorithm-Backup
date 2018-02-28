#include<stdio.h>
#include<string.h>
#include <math.h>

#define MAX 100005

int p[MAX][12];

int MaxOf2(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int MaxOf3(int a, int b, int c)
{
    int max = 0;
    if(a > b)
    {
      max = a;
    }
    else
    {
        max = b;
    }
    if(max >c)
    {
        return max;
    }
    else
    {
        return c;
    }

}

int MaxNumOfPie(int max_time)
{
    int i, j, max;
    for (i = max_time - 1; i >= 0; --i)
    {
        p[i][0] = MaxOf2(p[i+1][0], p[i+1][1]) + p[i][0];

        for (j = 1; j < 10; ++j)
        {
            p[i][j] = MaxOf3(p[i+1][j-1], p[i+1][j], p[i+1][j+1]) + p[i][j];
        }

            p[i][10] = MaxOf2(p[i+1][10], p[i+1][9]) + p[i][10];

    }
    return p[0][5];
}

int main()
{
    int n = 0, time = 0, location = 0, max_time = 0;

    while (scanf("%d", &n) != EOF && n != 0)
    {
        memset(p, 0, sizeof(p));
        max_time = -1;
        for(int i = 1; i<= n; i++)
        {
            scanf ("%d%d", &location, &time);

            p[time][location]++;
            if (max_time < time)
            {
                max_time = time;
            }

        }
            printf ("%d\n", MaxNumOfPie(max_time));
    }
    return 0;
}