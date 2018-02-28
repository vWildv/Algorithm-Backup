#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char ChessBorad[9][9];
int Visited[9];
int Ans;
int n,k;
void Dfs(int Line,int ChessNum)
{
    if(ChessNum==0){
        Ans++;
        return;
    }
    for(int i=Line;i<=n;i++)
        for(int j=1;j<=n;j++){
            if(ChessBorad[i][j]=='#'&&!Visited[j]){
                Visited[j]=1;
                Dfs(i+1,ChessNum-1);
                Visited[j]=0;
            }
        }
}
int main()
{
    while(cin>>n>>k&&n!=-1){
        memset(ChessBorad,'.',sizeof(ChessBorad));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>ChessBorad[i][j];
        memset(Visited,0,sizeof(Visited));
        Ans=0;
        Dfs(1,k);
        cout<<Ans<<endl;
    }
    return 0;
}
