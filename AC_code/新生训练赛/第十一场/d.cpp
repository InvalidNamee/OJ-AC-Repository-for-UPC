#include <cstdio>
#include <iostream>
#define int long long

using namespace std;

int l[1010], r[1010];

signed main() {
    int n, q;
    scanf("%lld%lld", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld%lld", &l[i], &r[i]);
    }
    while (q--) {
        int t, x, y;
        scanf("%lld%lld%lld", &t, &x, &y);
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            int p = l[i] + min(t % (2 * (r[i] - l[i])), 2 * (r[i] - l[i]) - (t % (2 * (r[i] - l[i]))));
            if (x <= p && p <= y) cnt++;
        }
        printf("%lld\n", cnt);
    }
    return 0;
}