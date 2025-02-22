#include <iostream>

using namespace std;

const int N = 200010;

int a[N];
long long tr[N * 4], lazy[N * 4], lazy_d[N * 4];

void pushup(int u) {
    tr[u] = tr[u << 1] + tr[u << 1 | 1];
}

void pushdown(int u, int l, int r) {
    int mid = l + r >> 1;
    if (lazy_d[u]) {
        lazy_d[u << 1] += lazy_d[u], lazy_d[u << 1 | 1] += lazy_d[u];
        lazy[u << 1] += lazy[u], lazy[u << 1 | 1] += lazy[u] + lazy_d[u] * (mid - l + 1);
        tr[u << 1] += lazy[u] * (mid - l + 1) + lazy_d[u] * (mid - l + 1) * (mid - l) / 2;
        tr[u << 1 | 1] += (lazy[u] + lazy_d[u] * (mid - l + 1)) * (r - mid) + lazy_d[u] * (r - mid) * (r - mid - 1) / 2;
        lazy[u] = 0;
        lazy_d[u] = 0;
    }
}

void build(int u, int l, int r) {
    if (l == r) tr[u] = a[l];
    else {
        int mid = l + r >> 1;
        build(u << 1, l, mid), build(u << 1 | 1, mid + 1, r);
        pushup(u);
    }
}

void modify(int u, int l, int r, int ql, int qr) {
    if (ql <= l && r <= qr) {
        tr[u] += (long long)(l - ql + 1) * (r - l + 1) + (long long)(r - l + 1) * (r - l) / 2;
        lazy[u] += l - ql + 1;
        lazy_d[u]++;
    }
    else {
        pushdown(u, l, r);
        int mid = l + r >> 1;
        if (ql <= mid) modify(u << 1, l, mid, ql, qr);
        if (qr > mid) modify(u << 1 | 1 , mid + 1, r, ql, qr);
        pushup(u);
    }
}

long long query(int u, int l, int r, int ql, int qr) {
    if (ql <= l && r <= qr) return tr[u];
    else {
        pushdown(u, l, r);
        int mid = l + r >> 1;
        long long res = 0;
        if (ql <= mid) res += query(u << 1, l, mid, ql, qr);
        if (qr > mid) res += query(u << 1 | 1, mid + 1, r, ql, qr);
        return res;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("input", "r", stdin);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    build(1, 1, n);
    int t = 0;
    while (q--) {
        int op, l, r;
        cin >> op >> l >> r;
        if (op == 1) modify(1, 1, n, l, r);
        else cout << query(1, 1, n, l, r) << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23128
	Language: C++
	Result: 正确
	Time:240 ms
	Memory:21912 kb
****************************************************************/