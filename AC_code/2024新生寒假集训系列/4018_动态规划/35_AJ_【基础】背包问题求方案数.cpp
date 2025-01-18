#include <cstdio>

const int MOD = 1000000007;
int v[1010], w[1010];
int f[1010], g[1010];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &v[i], &w[i]);
    }
    g[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = m; j >= v[i]; --j) {
            if (f[j] < f[j - v[i]] + w[i]) {
                f[j] = f[j - v[i]] + w[i];
                g[j] = g[j - v[i]];
            }
            else if (f[j] == f[j - v[i]] + w[i]) {
                g[j] = ((long long)g[j] + g[j - v[i]]) % MOD;
            }
        }
    }
    int mx = 0;
    for (int i = 1; i <= m; ++i) {
        mx = mx > f[i] ? mx : f[i];
    }
    int res = 0;
    for (int i = 1; i <= m; ++i) {
        if (f[i] == mx) res = (res + g[i]) % MOD;
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 23902
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1252 kb
****************************************************************/