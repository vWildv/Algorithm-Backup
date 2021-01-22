#include <stdio.h>
#include <string.h>
char map[655][655];
char tmp[655][655];
int moves[8][2] = {1, 0, -1, 0, 0, 1, 0, -1, 1, 1, 1, -1, -1, 1, -1, -1};
int heada, headb, a, b;
int main() {
    int t;
    scanf("%d", &t);
    while (t --) {
        memset(map, 0, sizeof(map));
        int  maxCnt = 0, maxG = 0;
        char s[6];
        scanf ("%d%d", &a, &b);
        for (int i = 0; i < a; i ++) {
            scanf ("%s", s);
            for (int j = 0; s[j]; j ++) {
                if (s[j] == '#') {
                    map[325 + i][325 + j] = 1;
                    maxCnt ++;
                }
            }
        }
        heada = 325 - 1;
        headb = 325 - 1;
        a += 2;
        b += 2;
        int nextCnt;
        for (int g = 1; g <= 321; g ++) {
            nextCnt = nextG ();
            if (nextCnt > maxCnt) {
                maxCnt = nextCnt;
                maxG = g;
            }
        }
        printf("%d %d %d\n", maxG, maxCnt, nextCnt);
    }
}
 
int judge(int a, int b) {
    int cnt = 0;
    for (int k = 0; k < 8; k++) {
        int aa = a + moves[k][0];
        int bb = b + moves[k][1];
        if (map[aa][bb])
            cnt++;
    }
    if (map[a][b]) {
        if (cnt < 2 || cnt > 3) return 1;
    } else {
        if (cnt == 3) return 2;
    }
    return 4;
}
int nextG () {
    int cnt = 0, maxi = 0, maxj = 0, mini = 999, minj = 999;
    for (int i = heada; i < heada + a; i ++) {
        for (int j = headb; j < headb + b; j ++) {
            int res = judge(i, j);
            if (res == 1) {
                tmp[i][j] = 0;
            }
            else if (res == 2) {
                tmp[i][j] = 1;
            }
            else {
                tmp[i][j] = map[i][j];
            }
            if (tmp[i][j]) {
                cnt ++;
                if (i < mini) mini = i;
                if (i > maxi) maxi = i;
                if (j < minj) minj = j;
                if (j > maxj) maxj = j;
            }
        }
    }
 
 
 
    for (int i = heada; i < heada + a; i++) {
        for (int j = headb; j < headb + b; j++){
            map[i][j] = tmp[i][j];
//            if (tmp[i][j])
//                putchar ('#');
//            else
//                putchar ('.');
        }
        //putchar ('\n');
    }
    heada = mini - 1;
    headb = minj - 1;
    a = maxi - mini + 3;
    b = maxj - minj + 3;
    //printf ("%d %d\n", heada, headb);
    //printf ("%d %d %d %d\n", mini, minj, maxi, maxj);
    return cnt;
}