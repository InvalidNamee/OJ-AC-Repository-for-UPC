#include <cstdio>
#include <iostream>

using namespace std;

typedef long long ll;

const int N = 100010;
const int MOD = 1000000007;

int a[N];
ll f[N][100];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    if (a[1]) f[1][a[1]] = 1;
    else for (int i = 1; i <= m; ++i) f[1][i] = 1;
    for (int i = 2; i <= n; ++i) {
        if (a[i]) {
            for (int j = max(1, a[i] - 1); j <= min(a[i] + 1, m); ++j) {
                f[i][a[i]] += f[i - 1][j];
                f[i][a[i]] %= MOD;
            }
        }
        else {
            for (int k = 1; k <= m; ++k) {
                if (f[i - 1][k]) {
                    for (int j = max(1, k - 1); j <= min(k + 1, m); ++j) {
                        f[i][j] += f[i - 1][k];
                        f[i][j] %= MOD;
                    }
                }
            }
        }
    }
    ll res = 0;
    for (int i = 1; i <= m; ++i) {
        res += f[n][i];
        res %= MOD;
    }
    printf("%lld\n", res);
    return 0;
}
/**************************************************************
	Problem: 23057
	Language: C++
	Result: 正确
	Time:147 ms
	Memory:80744 kb
****************************************************************/
