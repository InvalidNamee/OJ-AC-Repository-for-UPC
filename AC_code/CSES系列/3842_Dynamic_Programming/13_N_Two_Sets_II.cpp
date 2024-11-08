#include <cstdio>

typedef long long ll;

const int MOD = 1000000007;

ll f[62626];

int main() {
    int n;
    scanf("%d", &n);
    if (n * (n + 1) >> 1 & 1) printf("0\n");
    else {
        f[0] = 1;
        int lim = n * (n + 1) >> 2;
        for (int i = 1; i <= n; ++i) {
            for (int j = lim; j >= i; --j) {
                if (!f[j - i]) continue;
                f[j] += f[j - i];
                f[j] %= MOD;
            }
        }
        printf("%lld\n", f[lim] * 500000004 % MOD);
    }
    return 0;
}
/**************************************************************
	Problem: 23063
	Language: C++
	Result: 正确
	Time:50 ms
	Memory:1728 kb
****************************************************************/
