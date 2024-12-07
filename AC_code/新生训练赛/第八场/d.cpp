#include <cstdio>

const int N = 200010;
const int MOD = 1000000007;

long long f[N];

int main() {
    int n;
    scanf("%d", &n);
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        if (i - 3 >= 0) f[i] = (f[i - 1] + f[i - 3]) % MOD;
        else f[i] = f[i - 1];
    }
    printf("%lld\n", f[n]);
    return 0;
}