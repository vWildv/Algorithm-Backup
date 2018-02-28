#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
struct node
{
	int x,y,value;
	bool friend operator < (const node a,const node b){
        return a.value > b.value;
	}
};
int visit[202][202];
char ma[202][202];
priority_queue<node> q;
int N=100000000;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   int n,m;
	   cin>>n>>m;
	   int x0,y0,xx,yy;
	   while(!q.empty())q.pop();
	   for(int i=1;i<=n;i++)
	   {
	   	   for(int j=1;j<=m;j++)
		   {
               cin>>ma[i][j];
               if(ma[i][j]=='Z')
			   {
			   	  x0=i,y0=j;
			   }
               if(ma[i][j]=='W')
			   {
			   	  xx=i,yy=j;
			   }
		   }
	   }
	   for(int i=1;i<=n;i++)
	   {
	   	   for(int j=1;j<=m;j++)
			  visit[i][j]=N;
	   }
	   node t,t1,t2,t3,t4;
	   t.x=x0,t.y=y0;
	   t.value=0;
	   visit[x0][y0]=0;
	   q.push(t);
	   while(!q.empty())
	   {
	   	   t=q.top();
	   	   q.pop();
	   	  // cout<<t.x<<" "<<t.y<<endl;
	   	   if(t.x+1<=n&&ma[t.x+1][t.y]!='#'&&visit[t.x+1][t.y]==N)
		   {
				t1.x=t.x+1;
				t1.y=t.y;
		   	   if(ma[t1.x][t1.y]=='.'||ma[t1.x][t1.y]=='W')
			   {
				  t1.value=t.value+1;
			   }
			   else
			   {
                  t1.value=t.value+ma[t1.x][t1.y]-'0'+1;
			   }
			   visit[t1.x][t1.y]=min(t1.value,visit[t1.x][t1.y]);
			   q.push(t1);
		   }
		   if(t.x-1>0&&ma[t.x-1][t.y]!='#'&&visit[t.x-1][t.y]==N)
		   {
				t1.x=t.x-1;
				t1.y=t.y;
		   	   if(ma[t1.x][t1.y]=='.'||ma[t1.x][t1.y]=='W')
			   {
				  t1.value=t.value+1;
			   }
			   else
			   {
                  t1.value=t.value+ma[t1.x][t1.y]-'0'+1;
			   }
			   visit[t1.x][t1.y]=min(t1.value,visit[t1.x][t1.y]);
			   q.push(t1);
		   }
            if(t.y-1>0&&ma[t.x][t.y-1]!='#'&&visit[t.x][t.y-1]==N)
		   {
				t1.x=t.x;
				t1.y=t.y-1;
		   	   if(ma[t1.x][t1.y]=='.'||ma[t1.x][t1.y]=='W')
			   {
				  t1.value=t.value+1;
			   }
			   else
			   {
                  t1.value=t.value+ma[t1.x][t1.y]-'0'+1;
			   }
			   visit[t1.x][t1.y]=min(t1.value,visit[t1.x][t1.y]);
			   q.push(t1);
		   }
		   if(t.y+1<=m&&ma[t.x][t.y+1]!='#'&&visit[t.x][t.y+1]==N)
		   {
				t1.x=t.x;
				t1.y=t.y+1;
		   	   if(ma[t1.x][t1.y]=='.'||ma[t1.x][t1.y]=='W')
			   {
				  t1.value=t.value+1;
			   }
			   else
			   {
                  t1.value=t.value+ma[t1.x][t1.y]-'0'+1;
			   }
			   visit[t1.x][t1.y]=min(t1.value,visit[t1.x][t1.y]);
			   q.push(t1);
		   }
		   if(t.x == xx && t.y == yy)
            break;
	   }
//        for(int i=1;i<=n;i++){
//            for(int j=1;j<=m;j++)
//                cout<<visit[i][j];
//            cout<<endl;
//        }
	   if(visit[xx][yy]!=N)
	   	 cout<<visit[xx][yy]<<endl;
	   else
		 cout<<"IMPOSSIBLE"<<endl;
	}
}
