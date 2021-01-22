#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;
const int MAXN = 1e2+5;
typedef long long LL;
int equ, var;///equ个方程 var个变量
int a[MAXN][MAXN];///增广矩阵
int x[MAXN];///解的数目
bool free_x[MAXN];///判断是不是自由变元
int free_num;///自由变元的个数
inline int GCD(int m, int n)
{
    if(n == 0)
        return m;
    return GCD(n, m%n);
}
inline int LCM(int a, int b)
{
    return a/GCD(a,b)*b;
}

int Gauss()
{
    int Max_r;///当前列绝对值最大的存在的行
    ///col：处理当前的列
    int row = 0;
    int free_x_num;
    int free_index;
    for(int col=0; row<equ&&col<var; row++,col++)
    {
        Max_r = row;
        for(int i=row+1; i<equ; i++)
            if(abs(a[i][col]) > abs(a[Max_r][col]))
                Max_r = i;

        if(Max_r != row)
            for(int i=0; i<var+1; i++)
                swap(a[row][i], a[Max_r][i]);

        if(a[row][col] == 0)
        {
            row--;
            continue;
        }
        for(int i=row+1; i<equ; i++)
        {
            if(a[i][col])
            {
                for(int j=col; j<var+1; j++)
                    a[i][j] ^= a[row][j];
            }
        }
    }
    for(int i=row; i<equ; i++)
        if(a[i][var])
            return -1;///无解
    return var - row;
}
int pre[MAXN], fin[MAXN];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        memset(a, 0, sizeof(a));
        cin>>equ;
        var = equ;
        for(int i=0; i<equ; i++)
            cin>>pre[i];
        for(int i=0; i<equ; i++)
        {
            cin>>fin[i];
            a[i][var] = abs(fin[i]-pre[i]);
            a[i][i] = 1;
        }
        int i, j;
        while(cin>>i>>j)
        {
            if(i==0 && j==0)
                break;
            a[j-1][i-1] = 1;
        }
        int n = Gauss();
        if(n == -1)
            puts("Oh,it's impossible~!!");
        else
        {
            LL ret = 1;
            for(int i=1; i<=n; i++)
                ret *= 2;
            cout<<ret<<endl;
        }
    }
    return 0;
}
