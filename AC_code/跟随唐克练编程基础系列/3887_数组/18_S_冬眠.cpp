#include <cstdio>
#define int long long

int a[50];

signed main() {
    int d, n, s = 0;
    scanf("%lld%lld", &d, &n);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
        s += a[i];
    }
    int t = d / s * n;
    d %= s;
    for (int i = 0; d > 0; ++i) {
        t++;
        d -= a[i];
    }
    printf("%lld\n", t);
    return 0;
}
/**************************************************************
	Problem: 9756
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
