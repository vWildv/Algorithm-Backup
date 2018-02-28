#include <stdio.h>
int N, M;
int num[10005];
int ans;
void met() {
    ans = 0;
    for(int i = 1; i <= N; i ++)
        num[i] = i;
}
int Find(int x) {
    if(x != num[x])
        num[x] = Find(num[x]);
    return num[x];
}
int nect(int a, int b) {
    int a1 = Find(a);
    int b1 = Find(b);
    if(a1 != b1) {
        num[a1] = b1;
        return 1;
    }
    else return 0;

}

int main()
{
    int T;
    scanf("%d", &T);
    while(T --) {
        scanf("%d%d", &N, &M);
        int a, b;
        met();
        for(int i = 1; i <= M; i ++) {
            scanf("%d%d", &a, &b);
            if(nect(a, b))
                ans ++;
        }
        printf("%d\n", N - ans);
    }
    return 0;
}