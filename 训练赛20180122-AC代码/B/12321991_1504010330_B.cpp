#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#define eps 1e-6
using namespace std;

int p[1005],v[1005];
double d[1005][2];
int getp(int i){
    int a=i;
    while(a!=p[a]){
        a=p[a];
    }
    p[i]=a;
    return a;
}
void unionp(int i,int j){
     int a=getp(i);
     int b=getp(j);
     if(a!=b){
        p[a]=b;
     }
}
double dis(int i,int j){
     return sqrt((d[i][0]-d[j][0])*(d[i][0]-d[j][0])+(d[i][1]-d[j][1])*(d[i][1]-d[j][1]));
}
int main ()
{
     double dd,x,y;
     int n,a,b,num;
     char s;
     cin>>n>>dd;
     for(int i=1;i<=n;i++){
         p[i]=i;
         v[i]=0;
         cin>>x>>y;
         d[i][0]=x;
         d[i][1]=y;
     }
     getchar();
     num=0;
      while(cin>>s){
        if(s=='O'){
           cin>>a;
           for(int i=0;i<num;i++){
               if(dis(a,v[i])<=dd+eps){
                unionp(a,v[i]);
               }
           }
           v[num++]=a;
        }
        else{
                cin>>a>>b;
                int pa=getp(a);
                int pb=getp(b);
                if(pa==pb)
                    cout<<"SUCCESS"<<endl;
                else cout<<"FAIL"<<endl;
        }
      }
}
