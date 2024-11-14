#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

pair<int, int> a[200010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &a[i].first, &a[i].second);
    }
    sort(a + 1, a + n + 1);
    long long now = 0, ans = 0;
    for (int i = 1; i <= n; ++i) {
        now += a[i].first;
        ans += a[i].second - now;
    }
    printf("%lld\n", ans);
    return 0;
}

/**************************************************************
	Problem: 23031
	Language: C++
	Result: 正确
	Time:385 ms
	Memory:2684 kb
****************************************************************/
