#include <cstdio>

int a[30][30];

int main() {
    int n, t = 0;
    int x, y = 0;
    scanf("%d", &n);
    x = n;
    while (t < n * n) {
        while (y + 1 <= n && !a[x][y + 1]) a[x][++y] = ++t;
        while (x - 1 > 0 && !a[x - 1][y]) a[--x][y] = ++t;
        while (y - 1 > 0 && !a[x][y - 1]) a[x][--y] = ++t;
        while (x + 1 <= n && !a[x + 1][y]) a[++x][y] = ++t;
        // break;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 10168
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
