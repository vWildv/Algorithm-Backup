#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    char str[105];
    while(gets(str))
    {
        int len = strlen(str);
        int flag = 0;
        for(int i = 0; i < len ; i ++) 
        {
            if(str[i]=='b' && str[i+1]== 'k' && str[i+2] == 'p' && str[i+3] == 's' && str[i+4] == 't' && str[i+5] == 'o' && str[i+6] == 'r')
                flag = 1;
        }
       if(flag)
           cout << "Warning" << endl;
       else
           cout << "Safe" <<endl;
   }
}