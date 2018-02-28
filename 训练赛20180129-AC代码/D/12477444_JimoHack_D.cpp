#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>
#include <set>
#define TRUE 9999
#define Init0(x) memset(x,sizeof(x),0);
#define Init_(x) memset(x,sizeof(x),-1);
using namespace std;
typedef long long int int64;
class People
{
public:
    char name[11];
    int  score;
    People()
    {
            score=0;
    }
};
bool cmp(People a,People b)
{
        return (a.score>b.score);
}
int main()
{
    int n,a,b,m;
    while(~scanf("%d%d",&n,&m))
    {
        People tmp;
        vector<People> ranks[100005];
        for(int i=1;i<=n;++i)
        {
                int part;
                scanf("%s%d%d" ,tmp.name,&part,&tmp.score);
                ranks[part].push_back(tmp);
        }
        for(int i=1;i<=m;++i)
        {
                sort(ranks[i].begin(),ranks[i].end(),cmp);
//                for(int j=0;j<ranks[i].size();++j)
//                        cout<<ranks[i][j].name<<":"<<ranks[i][j].score<<",";
//                cout<<endl;
                if(ranks[i].size()==2||ranks[i][1].score!=ranks[i][2].score)
                {
                        printf("%s %s\n",ranks[i][0].name,ranks[i][1].name);
                }
                else
                {
                                printf("?\n");
                }
        }
    }
}

