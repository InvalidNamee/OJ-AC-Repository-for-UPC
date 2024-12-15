#include <cstdio>
#include <cmath>

int g[100][100], s[100][100];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int c = m / 2 + 1;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= m; ++j) {
            s[i][j] = abs(i - c) + abs(j - c);
            s[i][j] += s[i][j - 1];
        }
    }
    for (int i = 1; i <= n; ++i) {
        int cnt;
        scanf("%d", &cnt);
        int mn = 0x3f3f3f3f, mnline = -1, mnp = -1;
        for (int j = 1; j <= m; ++j) {
            int p = -1, l = 0;
            for (int k = 1; k <= m; ++k) {
                if (g[j][k]) l = 0;
                else {
                    l++;
                    if (l >= cnt) {
                        if (mn > s[j][k] - s[j][k - cnt]) {
                            mn = s[j][k] - s[j][k - cnt];
                            mnline = j;
                            mnp = k;
                        }
                    }
                }
                // printf("%d ", l);
            }
            // printf("\n");
        }
        if (mnline == -1) printf("-1\n");
        else {
            int l = mnp - cnt + 1, r = mnp;
            for (int j = l; j <= r; ++j) g[mnline][j] = true;
            printf("%d %d %d\n", mnline, l, r);
        }
        // for (int j = 1; j <= m; ++j) {
        //     for (int k = 1; k <= m; ++k) {
        //         printf("%d ", g[j][k]);
        //     }
        //     printf("\n");
        // }
        // printf("\n");
    }
    return 0;
}