#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;
class tree
{
public:
    vector<int> next;
} ;
int main()
{

    int T;
    scanf("%d",&T);
    while(T--)
    {
        int m,n,cnt=0;
        scanf("%d%d",&n,&m);
        bool isok[n+5];
        memset(isok,0,sizeof(isok));
        tree mytree[n+5];
        for(int i=0;i<m;++i)
        {
            int tmp,tmp2;
            scanf("%d%d",&tmp,&tmp2);
            mytree[tmp].next.push_back(tmp2);
            mytree[tmp2].next.push_back(tmp);
        }
        for(int i=1;i<=n;++i)
        {
            if(!isok[i])
            {
                queue<int> que;
                ++cnt;
                que.push(i);
                isok[i]=true;
                while(!que.empty())
                {
                    int now=que.front();
                    que.pop();
                    for(int j=0;j<mytree[now].next.size();++j)
                    {
                        if(!isok[mytree[now].next[j]])
                        {
                            isok[mytree[now].next[j]]=true;
                            que.push(mytree[now].next[j]);
                        }
                    }
                }
            }
        }
        printf("%d\n",cnt);
    }
}
