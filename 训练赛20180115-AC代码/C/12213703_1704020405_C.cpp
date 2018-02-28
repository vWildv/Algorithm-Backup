#include<iostream>
#include<string.h>
using namespace std;
char cmp[] = {'b','k','p','s','t','o','r'};
int main()
{  char str[105];
  while(cin >> str)
  {int i,j,k;
     for(i = 0;i < strlen(str);i ++)
     {   k = i;
         for(j = 0;j < 7;j ++)
         {if(cmp[j] == str[k]){k ++;}
          else break;
         }
      if(j == 7){cout<<"Warning"<<endl;break;}
     }
    if(j == 7)continue;
     else cout<<"Safe"<<endl;
  }
}
