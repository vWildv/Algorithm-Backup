#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int zhuangtai[2000];
struct forma
{
    int pro;
    int time;
    int last;
} q[200];
bool cmp(forma a,forma b)
{
    if(a.pro!=b.pro)
        return a.pro<b.pro;
    else
    {
        return a.time<b.time;
    }

}
int main()
{
    int num,i;
    while(cin>>num)
    {
        while(num--)
        {
            memset(zhuangtai,0,sizeof(zhuangtai));
            int pronum,testnum;
            char non;
            cin>>pronum>>testnum;
            char deal[10],res[10];
            for(i=0; i<testnum; i++)
            {
                cin>>q[i].pro>>deal>>res;
                if(res[0]=='A'&&res[1]=='C')
                    q[i].last=1;
                else q[i].last=0;
                q[i].time=((deal[0]-'0')*10+(deal[1]-'0'))*60+(deal[3]-'0')*10+(deal[4]-'0');
            }
            sort(q,q+testnum,cmp);
            int solve=0,time=0,timesum=0;
            for(i=0; i<testnum; i++)
            {
                if(i!=0&&q[i].pro!=q[i-1].pro)
                {
                    time=0; /// WA time is deleted
                }
                if(zhuangtai[q[i].pro]==1)  ///the next AC is not used
                    continue;
                if(q[i].last==0)   /// the WA time
                    time+=20;
                else
                {
                    timesum+=time+q[i].time;
                    time=0;
                    zhuangtai[q[i].pro]=1;
                    solve++;
                }

            }
            cout<<solve<<' '<<timesum<<endl;
        }
    }
    return 0;
}
