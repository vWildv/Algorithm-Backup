#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string hh,mm;
    while(cin>>x>>hh>>mm){
        int h=(hh[0]-'0')*10+(hh[1]-'0');
        int m=(mm[0]-'0')*10+(mm[1]-'0');
        for(int n=0;;n++){
            if(h%10==7||m%10==7){
                cout<<n<<endl;
                break;
            }
            if(m>=x)
                m-=x;
            else if(h>0){
                m=60-(x-m);
                h--;
            }
            else{
                m=60-(x-m);
                h+=23;
            }
            //cout<<h<<' '<<m<<endl;
        }
    }
    return 0;
}