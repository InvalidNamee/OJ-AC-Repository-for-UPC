#include <cstdio>

typedef long long ll;

const int N = 200010;

struct FenwickTree {
    ll a[N];
    int n;

    void add(int u, int v) {
        for (; u <= n; u += u & -u) {
            a[u] += v;
        }
    }

    ll query(int u) {
        ll res = 0;
        for (; u; u -= u & -u) {
            res += a[u];
        }
        return res;
    }
} tr;

int a[N];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    tr.n = n;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        tr.add(i, a[i] - a[i - 1]);
    }
    while (q--) {
        int t;
        scanf("%d", &t);
        if (t == 1) {
            int l, r, v;
            scanf("%d%d%d", &l, &r, &v);
            tr.add(r + 1, -v);
            tr.add(l, v);
        }
        else {
            int x;
            scanf("%d", &x);
            printf("%lld\n", tr.query(x));
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23116
	Language: C++
	Result: 正确
	Time:131 ms
	Memory:3580 kb
****************************************************************/