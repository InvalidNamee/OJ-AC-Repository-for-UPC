#include <cstdio>

long long f[40][40];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    f[0][0] = 1;
    for (int i = 1; i <= m; ++i) {
        for (int j = 0; j < n; ++j) {
            f[i][j] = f[i - 1][(j - 1 + n) % n] + f[i - 1][(j + 1) % n];
        }
    }
    printf("%lld\n", f[m][0]);
    return 0;
}
/**************************************************************
	Problem: 2195
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1248 kb
****************************************************************/