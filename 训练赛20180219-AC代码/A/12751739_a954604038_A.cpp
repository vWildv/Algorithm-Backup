#include <stdio.h>
#include <cstring>

int cal(char str[]) {
    int m = 0;
    m = (str[1] - '0') * 60 + (str[3] - '0') * 10 + str[4] - '0';
    return m;
}

int main()
{
    int T;
    scanf("%d", &T);
    while(T --) {
        int n, m;
        scanf("%d%d", &n, &m);
        int num;
        char t[15], s[15];
        int vis[2005];
        int ans = 0;
        int numm = 0;
        memset(vis, 0, sizeof(vis));
        for(int i = 1; i <= m; i ++) {
            scanf("%d %s %s", &num, &t, &s);
            if(vis[num] == 1) continue;
            else {
                if(s[0] == 'A' && s[1] == 'C') {
                    numm ++;
                    int tmp = cal(t) + vis[num] * -20;
                    ans += tmp;
                    vis[num] = 1;
                }
                else {
                    vis[num] --;
                }
            }
        }
        printf("%d %d\n", numm, ans);
    }
}
