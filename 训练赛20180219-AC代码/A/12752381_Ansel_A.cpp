#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int t;
int n, m;
struct test
{
    int s;
    bool flag;

} a[15];
int main()
{
    int tmp, t1, t2;
    char s;
    string str;
    while (cin >> t)
    {
        while (t--)
        {
            for (int i = 1; i < 15; i ++ )
            {
                a[i].s = 0;
                a[i].flag = 0;
            }
            int sum = 0;
            int cnt = 0;
            cin >> n >> m;
            for (int i = 0; i < m; i++)
            {
                cin >> tmp >> t1 >> s >> t2 >> str;
                tmp-=1000;
                if (str == "AC" && !a[tmp].flag)
                {
                    sum += t1*60 + t2 + a[tmp].s;
                    a[tmp].flag = 1;
                    cnt++;
                }
                else
                {
                    a[tmp].s += 20;
                }
            }
            cout<<cnt<<" "<< sum << endl;
        }
    }
    return 0;
}
