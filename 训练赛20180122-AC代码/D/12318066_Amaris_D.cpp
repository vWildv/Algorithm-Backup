#include<cstdio>
#include<set>
#include<cstring>
#include<iostream>
using namespace std;

int a[10005];
set<int> b;

int main()
{
    int n;
    while(cin >> n)
    {
        b.clear();
        memset(a,0,sizeof(a));

        int t = n;
        while(t --)
        {
            int r;
            cin >> r;
            b.insert(r);
            a[r] ++;
        }
        int acd = (n + 1) / 2;
        set<int>::iterator iter;
        for(iter = b.begin();iter != b.end();iter ++)
        {
            if(a[*iter] >= acd)
            {
                cout << *iter << endl;
                break;
            }
        }
    }
    return 0;
}
