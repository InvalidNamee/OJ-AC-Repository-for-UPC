#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + m + 1);
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        int *p = lower_bound(a + 1, a + m + 1, t);
        if (p == a + 1) ans += abs(*p - t);
        else if (p == a + m + 1) ans += abs(*(p - 1) - t);
        else ans += min(abs(*p - t), abs(*(p - 1) - t));
    }
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 22795
	Language: C++
	Result: 正确
	Time:47 ms
	Memory:1628 kb
****************************************************************/