#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> a[100010];

int main() {
    int n, m;
    long long res = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &a[i].first, &a[i].second);
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i) {
        if (m > a[i].second) {
            m -= a[i].second;
            res += (long long)a[i].first * a[i].second;
        }
        else {
            res += (long long)a[i].first * m;
            break;
        }
    }
    printf("%lld\n", res);
    return 0;
}