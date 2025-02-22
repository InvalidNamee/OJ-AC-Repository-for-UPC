#include <cstdio>
#define int long long
const int mod = 1000000007;

int power(const int &n, int m) {
    int t = n, ans = 1;
    while (m) {
        if (m & 1) {
            ans *= t;
            ans %= mod;
        }
        t = (t * t) % mod;
        m >>= 1;
    }
    return ans;
}

signed main() {
    // freopen("data", "r", stdin);
    int n;
    scanf("%lld", &n);
    printf("%lld\n", power(2, n));
    return 0;
}
/**************************************************************
	Problem: 23000
	Language: C++
	Result: 正确
	Time:4 ms
	Memory:1120 kb
****************************************************************/