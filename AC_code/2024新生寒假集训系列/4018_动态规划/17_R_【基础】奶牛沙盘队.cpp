#include <cstdio>

int f[2010][1000];

int main() {
    int n, m, s = 0, res = 0;
    scanf("%d%d", &n, &m);
    f[0][0] = 1;
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        t %= m;
        for (int j = 0; j < m; ++j) {
            f[i][j] = ((long long)f[i - 1][j] + f[i - 1][((j - t) % m + m) % m]) % 100000000;
        }
    }
    printf("%d\n", (f[n][0] - 1 + 100000000) % 100000000);
    return 0;
}
/**************************************************************
	Problem: 23892
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:9088 kb
****************************************************************/