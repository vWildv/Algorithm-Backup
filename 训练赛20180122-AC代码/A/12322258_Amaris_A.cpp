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

int find_t(int x)
{
    if(x != father[x])
        father[x] = find_t(father[x]);
    return father[x];
}

void add_t(int a, int b)
{
    int x = find_t(a);
    int y = find_t(b);
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
            add_t(first, second);
        }
        cout << sum <<endl;
    }
    return 0;
}
