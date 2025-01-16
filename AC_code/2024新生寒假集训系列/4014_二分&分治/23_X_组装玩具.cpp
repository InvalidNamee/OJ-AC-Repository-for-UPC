#include <cstdio>
#include <iostream>
#include <queue>
#define int long long

using namespace std;

int a[100010], b[100010];
int n, m;

bool check(int mid) {
    int s = 0;
    for (int i = 1; i <= n; ++i) {
        s += max(0ll, b[i] * mid - a[i]);
    }
    return s <= m;
}

signed main() {
    scanf("%lld%lld", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &b[i]);
    }
    int l = 0, r = 2000000000;
    while (l < r) {
        int mid = (l + r + 1) >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%lld\n", l);
    return 0;
}
/**************************************************************
	Problem: 10252
	Language: C++
	Result: 正确
	Time:32 ms
	Memory:3784 kb
****************************************************************/