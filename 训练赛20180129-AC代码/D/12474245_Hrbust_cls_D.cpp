#include<bits/stdc++.h>
#define LL long long
using namespace std;

struct Node{
    string na;
    int sc;
    Node(string name,int score):na(name),sc(score){}
    bool operator < (const Node &nd) const{
        return sc > nd.sc;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    int n,m;
    while(cin>>n>>m){
        vector<Node>v[10005];
        for(int i=1;i<=n;i++){
            string a; int b,c;
            cin>>a>>b>>c;
            v[b].push_back(Node(a,c));
        }
        for(int i=1;i<=m;i++){
            sort(v[i].begin(),v[i].end());
            if(v[i].size()>2&&v[i][1].sc==v[i][2].sc)
                cout<<"?\n";
            else
                cout<<v[i][0].na<<' '<<v[i][1].na<<endl;
        }
    }
    return 0;
}

