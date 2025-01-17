#include <cstdio>
#include <cstring>

int f[110][110];

int main() {
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &f[i][j]);
        }
    }
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (i == j || i == k || j == k || !f[i][k] || !f[k][j]) continue;
                if (!f[i][j]) f[i][j] = f[i][k] + f[k][j];
                else f[i][j] = f[i][j] < f[i][k] + f[k][j] ? f[i][j] : f[i][k] + f[k][j];
            }
        }
    }
    printf("%d\n", f[x][y] - 1);
    return 0;
}
/**************************************************************
	Problem: 11569
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1284 kb
****************************************************************/