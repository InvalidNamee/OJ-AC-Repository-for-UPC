#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 200010;

struct SegmentTree {
    int val[N << 2];

    SegmentTree() {
        memset(val, 0x3f, sizeof(val));
    }

    void pushup(int u) {
        val[u] = min(val[u << 1], val[u << 1 | 1]);
    }

    void modify(int u, int l, int r, int p, int v) {
        if (l == r) {
            val[u] = v;
            return;
        }
        int mid = l + r >> 1;
        if (p <= mid) modify(u << 1, l, mid, p, v);
        else modify(u << 1 | 1, mid + 1, r, p, v);
        pushup(u);
    }

    int query(int u, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr) return val[u];
        int mid = l + r >> 1;
        int res = 0x3f3f3f3f;
        if (ql <= mid) res = min(res, query(u << 1, l, mid, ql, qr));
        if (qr > mid) res = min(res, query(u << 1 | 1, mid + 1, r, ql, qr));
        return res;
    }

    void print(int u, int l, int r) {
        if (l == r) {
            printf("%d ", val[l]);
            return;
        }
        int mid = l + r >> 1;
        print(u << 1, l, mid);
        print(u << 1 | 1, mid + 1, r);
    }
} lt, rt;

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        lt.modify(1, 1, n, i, t - i);
        rt.modify(1, 1, n, i, t + i);
    }
    while (q--) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            int k, x;
            scanf("%d%d", &k, &x);
            lt.modify(1, 1, n, k, x - k);
            rt.modify(1, 1, n, k, x + k);
        }
        else {
            int k;
            scanf("%d", &k);
            printf("%d\n", min(lt.query(1, 1, n, 1, k) + k, rt.query(1, 1, n, k + 1, n) - k));
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23122
	Language: C++
	Result: 正确
	Time:196 ms
	Memory:8480 kb
****************************************************************/