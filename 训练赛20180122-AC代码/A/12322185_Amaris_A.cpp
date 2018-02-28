#include<cstdio>
#include<iostream>
using namespace std;

int sum;
int father[1000];

void makeset(int x)
{
    for(int i = 1; i <= x; i ++)
        father[i] = i;
}

int findset(int x)//查找
{
    if(x != father[x])
        father[x] = findset(father[x]);//回溯，路径压缩
    return father[x];
}

void Union(int a, int b)//合并
{
    int x = findset(a);
    int y = findset(b);
    if(x == y)
        return;
    sum = sum - 1;
    father[y] = x;
}

int main()
{
    int t;
    int n, m;
    cin >> t;
    for(int r = 1; r <= t; r ++)
    {
        cin >> n >> m;
        sum = n;
        makeset(n);
        int first, second;
        for(int i = 1; i <= m; i++)
        {
            cin >> first >> second;
            Union(first, second);
        }
        cout << sum <<endl;
    }
    return 0;
}
