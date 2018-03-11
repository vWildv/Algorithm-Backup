#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

string s;  
int unkonW[2],consT[2],i=0,cnt=0,unkonw;

void cal(int sign){  
    int tmp=0;
    bool flag=0;  
    while(s[i]>='0'&&s[i]<='9'){  
        flag=1;
        tmp=tmp*10+s[i]-'0';  
        i++;
    }
    if(!flag)tmp=1;  
    if(sign)tmp=-tmp;  
    if(s[i]>='a'&&s[i]<='z'){  
        unkonW[cnt]+=tmp;  
        unkonw=s[i];
        i++;
    }
    else consT[cnt]+=tmp;
}

int main(){  
    cin>>s;  
    while(i<s.length()){  
        if(s[i]=='='){  
            cnt=1;  
            i++;  
            continue;  
        }  
        if(s[i]=='-'){  
            i++;  
            cal(1);  
        }
        else{  
            if(s[i]=='+') i++;  
            cal(0);  
        }  
    }
    double a=consT[0]-consT[1];  
    double b=unkonW[1]-unkonW[0];  
    printf("%c=%.3lf\n",unkonw,a/b);  
    return 0;  
} 