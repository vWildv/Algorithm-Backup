#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int  pre[1050];
bool t[1050];               //t 用于标记独立块的根结点

int Find(int x)
{
    int r = x;
    while(r != pre[r])      //当r不是节点时
        r = pre[r];         //找r的上级

    int i = x,j;            //压缩路径
    while(pre[i] != r)
    {
        j = pre[i];
        pre[i] = r;
        i = j;
    }
    return r;               //返回节点
}

void mix(int x,int y)       //连接
{
    int fx = Find(x),fy = Find(y);
    if(fx != fy)
    {
        pre[fy] = fx;
    }
}

int main()
{
    int N,M,T,a,b,i,j,ans;
    cin >> T;
    while(T --)
    {
        cin >> N >> M;
        for(i = 1; i <= N ; i ++)          //初始化
            pre[i] = i;

        for(i = 1 ; i <= M ; i++)          //吸收并整理数据
        {
            cin >> a >> b;
            mix(a,b);
        }

        memset(t,0,sizeof(t));
        for(i = 1 ; i <= N ; i++)          //标记根结点
        {
            t[Find(i)] = 1;
        }
        for(ans = 0,i = 1 ; i <= N;i ++)
            if(t[i])
                ans++;

        cout << ans << endl;

    }
    return 0;
}

