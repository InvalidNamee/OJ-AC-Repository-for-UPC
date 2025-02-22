#include <cstdio>
#include <iostream>

using namespace std;

typedef long long ll;

const int N = 200010;

struct SegmentTree {
    ll val[N << 2], mx[N << 2];

    void pushup(int u) {
        val[u] = val[u << 1] + val[u << 1 | 1];
        mx[u] = max(mx[u << 1], val[u << 1] + mx[u << 1 | 1]);
    }

    void modify(int u, int l, int r, int p, int v) {
        if (l == r) {
            val[u] = v;
            mx[u] = max(0, v);
            return;
        }
        int mid = l + r >> 1;
        if (p <= mid) modify(u << 1, l, mid, p, v);
        else modify(u << 1 | 1, mid + 1, r, p, v);
        pushup(u);
    }

    pair<ll, ll> query(int u, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr) return {val[u], mx[u]};
        int mid = l + r >> 1;
        pair<ll, ll> t1, t2;
        if (ql <= mid) t1 = query(u << 1, l, mid, ql, qr);
        if (qr > mid) t2 = query(u << 1 | 1, mid + 1, r, ql, qr);
        return t1.first + t2.second > t1.second ? make_pair(t1.first + t2.first, t1.first + t2.second) : make_pair(t1.first + t2.first, t1.second); 
    }
} tr;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
    #endif // !UNLINE_JUDGE
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        tr.modify(1, 1, n, i, t);
    }
    while (q--) {
        int op, a, b;
        scanf("%d%d%d", &op, &a, &b);
        if (op == 1) {
            tr.modify(1, 1, n, a, b);
        }
        else {
            printf("%lld\n", tr.query(1, 1, n, a, b).second);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23121
	Language: C++
	Result: 正确
	Time:194 ms
	Memory:14732 kb
****************************************************************/