#include <cstdio>

int a[5010][5010];

int main() {
    int n, t = 0;
    int x = 1, y = 0;
    scanf("%d", &n);
    while (t < n * n) {
        while (y + 1 <= n && !a[x][y + 1]) a[x][++y] = ++t;
        while (x + 1 <= n && !a[x + 1][y]) a[++x][y] = ++t;
        while (y - 1 > 0 && !a[x][y - 1]) a[x][--y] = ++t;
        while (x - 1 > 0 && !a[x - 1][y]) a[--x][y] = ++t;
    }
    int s1 = 0, s2 = 0;
    for (int i = 1; i <= n; ++i) s1 += a[i][i];
    for (int i = 1; i <= n; ++i) s2 += a[i][n - i + 1];
    printf("%d\n", s1 * s2);
    return 0;
}