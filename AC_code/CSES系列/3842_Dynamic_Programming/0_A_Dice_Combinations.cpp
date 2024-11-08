#include <cstdio>
#define int long long 

const int MOD = 1e9 + 7;

int f[1000010];

signed main() {
    int n;
    scanf("%lld", &n);
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 6; ++j) {
            if (i - j >= 0) f[i] += f[i - j], f[i] %= MOD;
        }
    }
    printf("%lld\n", f[n]);
    return 0;
}
/**************************************************************
	Problem: 23050
	Language: C++
	Result: 正确
	Time:581 ms
	Memory:8932 kb
****************************************************************/
