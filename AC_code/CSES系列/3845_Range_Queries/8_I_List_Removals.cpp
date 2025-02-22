#include <cstdio>

const int N = 200010;

struct SegmentTree {
    int val[N << 2];

    void pushup(int u) {
        val[u] = val[u << 1] + val[u << 1 | 1];
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

    int query(int u, int l, int r, int s) {
        if (l == r) return l;
        int mid = l + r >> 1;
        if (s <= val[u << 1]) return query(u << 1, l, mid, s);
        else return query(u << 1 | 1, mid + 1, r, s - val[u << 1]);
    }
} smt;

int a[N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        smt.modify(1, 1, n, i, 1);
    }
    for (int i = 1; i <= n; ++i) {
        int t, p;
        scanf("%d", &t);
        p = smt.query(1, 1, n, t);
        smt.modify(1, 1, n, p, 0);
        printf("%d ", a[p]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23119
	Language: C++
	Result: 正确
	Time:155 ms
	Memory:5148 kb
****************************************************************/