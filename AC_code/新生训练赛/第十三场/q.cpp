#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long ll;

ll s[100010], t[100010];

int find(ll s[], int l, int r, ll x) {
    while (l < r) {
        int mid = l + r >> 1;
        if (s[mid] > x) r = mid;
        else l = mid + 1;
    }
    return l;
}

int main() {
    int n, m, q;
    scanf("%d%d%d", &n, &m, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &s[i]);
    }
    for (int i = 1; i <= m; ++i) {
        scanf("%lld", &t[i]);
    }
    for (int i = 1; i <= q; ++i) {
        ll x;
        scanf("%lld", &x);
        ll rs = s[find(s, 1, n + 1, x)], ls = s[find(s, 1, n + 1, x) - 1];
        ll rt = t[find(t, 1, m + 1, x)], lt = t[find(t, 1, m + 1, x) - 1];
        ll res = 2e10;
        if (rs && rt) res = min(res, max(rs, rt) - x);
        if (ls && lt) res = min(res, x - min(ls, lt));
        if (ls && rt) res = min(res, rt - ls + min(rt - x, x - ls));
        if (lt && rs) res = min(res, rs - lt + min(rs - x, x - lt));
        printf("%lld\n", res);
    }
    return 0;
}
