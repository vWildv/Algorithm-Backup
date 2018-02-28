#include <iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;
int n;
int a[1001];
bool b[1001];
int main()
{
    while(~scanf("%d",&n))
    {
        memset(b,0,sizeof(b));
        int num = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(int j = 0; j < n; j++)
        {
            int c;
            if(num == n)
                break;
            if(!b[j])
            {
                num++;
                 c = a[j];b[j] = 1;
            }
            else
                continue;
            for(int i = j + 1; i < n; i++)
            {

                if(a[i] > c && !b[i])
                {
                    ans++;
                    c = a[i];
                    num++;
                    b[i] = 1;
                }
            }
        }
        printf("%d\n",ans);

    }
}

