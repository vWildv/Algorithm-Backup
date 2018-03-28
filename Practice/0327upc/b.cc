#include <bits/stdc++.h>
using namespace std;

int f(int x){
    if(x%4==0&&x%100!=0) return 1;
    if(x%400==0) return 1;
    return 0;
}

int check(int y,int m,int n){
    char s[9]; 
    s[1]=y/1000;
    s[2]=y%1000/100;
    s[3]=y%100/10;
    s[4]=y%10;
    s[5]=m/10;
    s[6]=m%10;
    s[7]=n/10;
    s[8]=n%10;
    //for(int i=1;i<=8;i++) printf("%d",s[i]);
    //printf("\n");
    for(int i=1;i<=4;i++)
        if(s[i]!=s[9-i]) return 0;
    return 1;
}

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
    long long n,m;
    scanf("%lld%lld",&n,&m);
    int yn=n/10000;
    int ym=m/10000;
    int mn=(n-(yn*10000))/100;
    int mm=(m-(ym*10000))/100;
    int dn=n-(yn*10000)-mn*100;
    int dm=m-(ym*10000)-mm*100;
    //printf("%d %d %d %d %d %d",yn,ym,mn,mm,dn,dm);
    //int flagn=0;
    int cnt=0;
    //if(f(yn)) flagn=1;
    //check(2011,11,02);
    //return 0;
    /*while(yn<ym||((yn==ym&&mn<mm)||(yn==ym&&mn==mm&&dn<=dm))){
        if(check(yn,mn,dn)) ans++;
        if(mn==2&&flagn){
            if(dn==29) mn++,dn=0;
        }
        else if(mn==2&&!flagn){
            if(dn==28) mn++,dn=0;
        }
        else if((mn==1||mn==3||mn==5||mn==7||mn==8||mn==10||mn==12)&&dn==31){
            mn++,dn=0;
        }
        else if((mn==4||mn==6||mn==9||mn==11)&&dn==30){
            mn++,dn=0;
        }
        if(mn==13) yn++,mn=1,dn=0;
        dn++;
    }*/
    for(int i=yn;i<=ym;i++){
        int tmpy=i*10000+i%10*1000+i%100/10*100+i%1000/100*10+i%10000/1000;
        int tmpm=tmpy%10000/100;
        int tmpd=tmpy%100;
        if(tmpm>=1&&tmpm<=12){
            if(tmpd>=1&&tmpd<=month[tmpm]) cnt++;
        }
        if(i==9220) cnt++;
    }
    printf("%d\n",cnt);
}
