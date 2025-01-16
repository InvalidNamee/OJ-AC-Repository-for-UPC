#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int n, m;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = n; i; --i) {
        a[i] -= a[i - 1];
    }
    sort(a + 2, a + n + 1);
    long long res = 0;
    for (int i = 2; i <= n - m + 1; ++i) {
        res += a[i];
    }
    printf("%lld\n", res);
    return 0;
}
/**************************************************************
	Problem: 12076
	Language: C++
	Result: 正确
	Time:24 ms
	Memory:1628 kb
****************************************************************/