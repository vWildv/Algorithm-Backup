#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<pair<int,string> > > a(10000);

int main(){
    int n, m;
    while(~scanf("%d%d",&n,&m)){
        a.clear();
        for(int i=0;i<n;i++){
            string name;
            int region,score;
            cin>>name>>region>>score;
            a[region-1].push_back(pair<int,string>(score,name));
        }
        for(int i=0;i<m;i++){
            sort(a[i].begin(), a[i].end());
            int n=a[i].size();
            if(n>2&&a[i][n-3].first>=a[i][n-2].first){
                printf("?\n");
                continue;
            }
            else if(n>=2){
                cout<<a[i][n-1].second<<" "<<a[i][n-2].second<<endl;
            }
        }
    }
    return 0;
}
