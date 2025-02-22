#include <cstdio>
#define int long long

signed main() {
    // freopen("data", "r", stdin);
    int n, ans = 0;
    int a = -1, b = 0;
    scanf("%lld", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &b);
        if (a <= b) {
            a = b;
        } 
        else {
            ans += a - b;
        }
        // printf("%lld ", b);
    }
    // printf("\n");
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 22995
	Language: C++
	Result: 正确
	Time:83 ms
	Memory:1120 kb
****************************************************************/