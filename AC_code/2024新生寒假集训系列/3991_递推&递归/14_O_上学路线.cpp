#include <cstdio>

const int MOD = 1000000007;

long long pow(long long n, int p) {
    long long res = 1, base = n;
    while (p) {
        if (p & 1) res = (res * base) % MOD;
        base = base * base % MOD;
        p >>= 1;
    }
    return res;
}

int main() {
    int n, m;
    long long res = 1;
    scanf("%d%d", &n, &m);
    n--, m--;
    n += m;
    m = m > n - m ? n - m : m;
    for (int i = n - m + 1; i <= n; ++i) {
        res = (res * i) % MOD;
    }
    for (int i = 1; i <= m; ++i) {
        res = (res * pow(i, MOD - 2)) % MOD;
    }
    printf("%lld\n", res);
    return 0;
}
/**************************************************************
	Problem: 12597
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/