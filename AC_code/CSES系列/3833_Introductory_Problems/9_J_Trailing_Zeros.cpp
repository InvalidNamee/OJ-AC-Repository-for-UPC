#include <cstdio>
#include <cmath>
#define int long long

signed main() {
    // freopen("data", "r", stdin);
    int n, ans = 0;
    scanf("%lld", &n);
    int l = log(n) / log(5);
    int t = 1;
    for (int i = 1; i <= l; ++i) {
        t *= 5;
        ans += n / t;
    }
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23001
	Language: C++
	Result: 正确
	Time:7 ms
	Memory:1216 kb
****************************************************************/