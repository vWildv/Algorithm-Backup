#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;
bool judge[101][101];
struct format
{
    int number;
    int rudu;
    bool used;
};
int main()
{
    int people,num;
    while(cin>>people>>num&&(people||num))
    {
        format ret[people+1]= {0,0,false};
        memset(judge,false,sizeof(judge));
        stack<format>s;
        while(!s.empty())
            s.pop();
        int a,b,i;
        for(i=0; i<people; i++)
            ret[i].number=i;
        for(i=0; i<num; i++)
        {
            cin>>a>>b;
            if(judge[a][b]==false&&a!=b)
            {
                judge[a][b]=true;
                ret[a].rudu++;
                ret[a].number=a;
            }
        }
//        for(i=0; i<num; i++)
//        {
//            cout<<ret[i].rudu<<endl;
//        }
        for(i=0; i<people; i++)
        {
            if(ret[i].rudu==0)
            {
                ret[i].used=true;
                s.push(ret[i]);
            }
        }
        int nownum;
//        for(i=0; i<num; i++)
//        {
//            cout<<ret[i].rudu<<endl;
//        }
        while(!s.empty())
        {
            nownum=s.top().number;
            for(i=0; i<people; i++)
            {
                if(judge[i][nownum]==true&&i!=nownum)
                {
                    ret[i].rudu--;
                }
            }
            s.pop();
//            cout<<'/'<<endl;
//            for(i=0; i<num; i++)
//        {
//            if(ret[i].rudu==0)
//            cout<<i<<endl;
//        }
            for(i=0; i<people; i++)
            {
                if(ret[i].rudu==0&&ret[i].used==false)
                {
                    ret[i].used=true;
                    s.push(ret[i]);
                }
            }
        }
        bool lastjudge=false;
//        for(i=0; i<num; i++)
//        {
//            cout<<ret[i].rudu<<endl;
//        }
        for(i=0; i<people; i++)
        {
            if(ret[i].rudu)
            {
                cout<<"NO"<<endl;
                lastjudge=true;
                break;
            }
        }
        if(!lastjudge)cout<<"YES"<<endl;
    }
    return 0;
}
//5 5
//0 3
//1 0
//2 1
//3 2
//3 4
