#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
#include <string>
#include <vector>
using namespace std;
bool isok[500000];
class tree
{
public:
    vector<int> next;
    int data;
    tree(int _data = 0,int _next = 0)
    {
        next.push_back(_next);
        data = _data;
    }
};
void init()
{
    memset(isok,false,sizeof(isok));
}
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        int cnt=0;
        tree mytree[100005];
        for(int i=0;i<m;++i)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            mytree[a].data=a;
            mytree[b].data=b;
            mytree[a].next.push_back(b);
            mytree[b].next.push_back(a);
        }
        queue <int > que;
        que.push(0);
        ++cnt;
        while(!que.empty())
        {
            int now=que.front();
            que.pop();
            for(int i=0;i<mytree[now].next.size();++i)
            {
                if(!isok[mytree[now].next[i]]&&mytree[mytree[now].next[i]].data!=0)
                {
                    que.push(mytree[now].next[i]);
                    isok[mytree[now].next[i]]=true;
                    ++cnt;
                }
            }
        }
        printf("%d\n",cnt);
    }
}
