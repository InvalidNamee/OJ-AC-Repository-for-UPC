#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> a[5010];

int main() {
    int n, m;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &a[i].first, &a[i].second);
    }
    sort(a + 1, a + n + 1);
    long long s = 0;
    for (int i = 1; i <= n; ++i) {
        if (m > a[i].second) {
            s += (long long)a[i].first * a[i].second;
            m -= a[i].second;
        }
        else {
            s += (long long)m * a[i].first;
            break;
        }
    }
    printf("%lld\n", s);
    return 0;
}
/**************************************************************
	Problem: 15317
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1276 kb
****************************************************************/