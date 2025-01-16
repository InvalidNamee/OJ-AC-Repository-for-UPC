#include <cstdio>

int f[20][20];

int main() {
    int n, m, k;
    scanf("%d%d", &n, &m);
    scanf("%d", &k);
    for (int i = 1; i <= k; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        f[x][y] = -1;
    }
    f[1][1] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (f[i][j] == -1) continue;
            else {
                if (f[i - 1][j] != -1) f[i][j] += f[i - 1][j];
                if (f[i][j - 1] != -1) f[i][j] += f[i][j - 1];
            }
        }
    }
    printf("%d\n", f[n][m]);
    return 0;
}