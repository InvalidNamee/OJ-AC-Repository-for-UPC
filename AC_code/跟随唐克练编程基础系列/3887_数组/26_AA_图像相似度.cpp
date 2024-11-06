#include <cstdio>

const int N = 110;

int a[N][N], b[N][N];

void rd(int a[][N], int m, int n) {
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    rd(a, m, n), rd(b, m, n);
    int t = 0;
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            t += a[i][j] == b[i][j];
        }
    }
    printf("%.2f\n", (double)t / m / n * 100);
    return 0;
}
/**************************************************************
	Problem: 2118
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1332 kb
****************************************************************/
