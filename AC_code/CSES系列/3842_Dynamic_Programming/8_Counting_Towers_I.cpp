#include <cstdio>
#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;
long long f[1000010], g[1000010];

int main() {
    f[1] = 1, g[1] = 1;
    for (int i = 2; i <= 1000000; ++i) {
        f[i] = ((f[i - 1] * 4) % MOD + g[i - 1]) % MOD;
        g[i] = (f[i - 1] + (g[i - 1] * 2) % MOD) % MOD;
    }
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", (g[n] + f[n]) % MOD);
    }
    return 0;
}
/**************************************************************
	Problem: 23058
	Language: C++
	Result: 正确
	Time:100 ms
	Memory:17648 kb
****************************************************************/
