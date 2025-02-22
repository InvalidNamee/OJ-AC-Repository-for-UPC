#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 200010;

int tr[N << 2];

void pushup(int u) {
    tr[u] = min(tr[u << 1], tr[u << 1 | 1]);
}

void modify(int u, int l, int r, int p, int v) {
    if (l == r && l == p) {
        tr[u] = v;
        return;
    }
    int mid = l + r >> 1;
    if (p <= mid) modify(u << 1, l, mid, p, v);
    else modify(u << 1 | 1, mid + 1, r, p, v);
    pushup(u);
}

int query(int u, int l, int r, int ql, int qr) {
    if (ql <= l && r <= qr) return tr[u];
    int mid = l + r >> 1;
    int res = 0x3f3f3f3f;
    if (ql <= mid) res = min(res, query(u << 1, l, mid, ql, qr));
    if (qr > mid) res = min(res, query(u << 1 | 1, mid + 1, r, ql, qr));
    return res;
}

int main() {
    memset(tr, 0x3f, sizeof(tr));
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        modify(1, 1, n, i, t);
    }
    while (q--) {
        int t, x, y;
        scanf("%d%d%d", &t, &x, &y);
        if (t == 1) {
            // printf("modify %d %d\n", x, y);
            modify(1, 1, n, x, y);
        }
        else {
            // printf("query %d %d\n", x, y);
            printf("%d\n", query(1, 1, n, x, y));
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23114
	Language: C++
	Result: 正确
	Time:186 ms
	Memory:5348 kb
****************************************************************/