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
        tr.add(i, a[i]);
    }
    while (q--) {
        int t, x, y;
        scanf("%d%d%d", &t, &x, &y);
        if (t == 1) {
            tr.add(x, y - a[x]);
            a[x] = y;
        }
        else {
            printf("%lld\n", tr.query(y) - tr.query(x - 1));
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23113
	Language: C++
	Result: 正确
	Time:119 ms
	Memory:3580 kb
****************************************************************/