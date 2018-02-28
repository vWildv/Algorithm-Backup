    #include<iostream>
    #include<cstring>
    using namespace std;

    bool check[9][9];
    bool col[9];
    int n,m;
    int sum;
    void dfs(int row,int num){
        if(num==m)
        {
            sum++;
            return;
        }
        if(row>n)
            return;
        for(int i=1;i<=n;i++){
            if(check[row][i]&&!col[i]){
                col[i]=true;
                dfs(row+1,num+1);
                col[i]=false;
            }
        }
        dfs(row+1,num);
        return;
    }

    int main(){
        int i,j;
        while((cin>>n>>m)&&!(n==-1&&m==-1)){

            memset(check,false,sizeof(check));
            memset(col,false,sizeof(col));
            sum=0;
            for(i=1;i<=n;i++)
            for(j=1;j<=n;j++){
               char s;
               cin>>s;
               if(s=='#')
                check[i][j]=true;
            }
            dfs(1,0);
            cout<<sum<<endl;
        }
        return 0;
    }
