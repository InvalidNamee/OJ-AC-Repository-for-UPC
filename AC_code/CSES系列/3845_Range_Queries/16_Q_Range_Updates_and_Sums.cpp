#include <cstdio>

const int N = 200010;

class SegmentTree {
    long long val[N << 2], add[N << 2], change[N << 2]; 

    void pushup(int u) {
        val[u] = val[u << 1] + val[u << 1 | 1];
    }

    void pushdown(int u, int l, int r) {
        int mid = l + r >> 1;
        // 有更改，把子节点覆盖
        if (change[u]) {
            val[u << 1] = change[u] * (mid - l + 1), val[u << 1 | 1] = change[u] * (r - mid);
            val[u << 1] += add[u] * (mid - l + 1), val[u << 1 | 1] += add[u] * (r - mid);
            change[u << 1] = change[u << 1 | 1] = change[u];
            add[u << 1] = add[u << 1 | 1] = add[u];
            change[u] = add[u] =  0;
        }
        // 只有加标记
        if (add[u]) {
            val[u << 1] += add[u] * (mid - l + 1), val[u << 1 | 1] += add[u] * (r - mid);
            add[u << 1] += add[u], add[u << 1 | 1] += add[u];
            add[u] = 0;
        }
    }
public:
    void build(int u, int l, int r, const int *a) {
        if (l == r) val[u] = a[l];
        else {
            int mid = l + r >> 1;
            build(u << 1, l, mid, a);
            build(u << 1 | 1, mid + 1, r, a);
            pushup(u);
        }
    }

    void modify_add(int u, int l, int r, int ql, int qr, int v) {
        if (ql <= l && r <= qr) {
            val[u] += (long long)(r - l + 1) * v;
            add[u] += v;
        }
        else {
            pushdown(u, l, r);
            int mid = l + r >> 1;
            if (ql <= mid) modify_add(u << 1, l, mid, ql, qr, v);
            if (qr > mid) modify_add(u << 1 | 1, mid + 1, r, ql, qr, v);
            pushup(u);
        }
    }

    void modify_change(int u, int l, int r, int ql, int qr, int v) {
        if (ql <= l && r <= qr) {
            val[u] = (long long)v * (r - l + 1);
            add[u] = 0;
            change[u] = v;
        }
        else {
            pushdown(u, l, r);
            int mid = l + r >> 1;
            if (ql <= mid) modify_change(u << 1, l, mid, ql, qr, v);
            if (qr > mid) modify_change(u << 1 | 1, mid + 1, r, ql, qr, v);
            pushup(u);
        }
    }

    long long query(int u, int l, int r, int ql, int qr) {
        if (ql <= l && r <= qr) return val[u];
        else {
            pushdown(u, l, r);
            long long res = 0;
            int mid = l + r >> 1;
            if (ql <= mid) res += query(u << 1, l, mid, ql, qr);
            if (qr > mid) res += query(u << 1 | 1, mid + 1, r, ql, qr);
            return res;
        }
    }
} tr;

int a[N];

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    tr.build(1, 1, n, a);
    while (q--) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            int a, b, x;
            scanf("%d%d%d", &a, &b, &x);
            tr.modify_add(1, 1, n, a, b, x);
        }
        else if (op == 2) {
            int a, b, x;
            scanf("%d%d%d", &a, &b, &x);
            tr.modify_change(1, 1, n, a, b, x);
        }
        else if (op == 3) {
            int a, b;
            scanf("%d%d", &a, &b);
            printf("%lld\n", tr.query(1, 1, n, a, b));
        }
        else {
            return 11111; // what if the data is wrong
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23127
	Language: C++
	Result: 正确
	Time:261 ms
	Memory:20776 kb
****************************************************************/