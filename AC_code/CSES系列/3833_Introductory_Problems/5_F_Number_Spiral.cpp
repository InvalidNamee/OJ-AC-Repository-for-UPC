#include <cstdio>
#define int long long


signed main() {
    // freopen("data", "r", stdin);
    int n; 
    scanf("%lld", &n);
    int x, y;
    while (n --) {
        scanf("%lld%lld", &x, &y);
        if (x <= y) {
            if (y & 1) printf("%lld\n", y * y - x + 1);
            else printf("%lld\n", (y - 1) * (y - 1) + x);
        }
        else {
            if (x & 1) printf("%lld\n", (x - 1) * (x - 1) + y);
            else printf("%lld\n", x * x - y + 1);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22997
	Language: C++
	Result: 正确
	Time:135 ms
	Memory:1120 kb
****************************************************************/