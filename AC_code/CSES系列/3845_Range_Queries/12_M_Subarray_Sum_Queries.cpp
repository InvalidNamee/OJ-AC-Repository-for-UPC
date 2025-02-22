#include <cstdio>
#include <iostream>

using namespace std;

const int N = 200010;

struct Node {
    long long s, ls, rs, ms;
} tr[N << 2];

void pushup(int u) {
    tr[u].s = tr[u << 1].s + tr[u << 1 | 1].s;
    tr[u].ls = max(tr[u << 1].ls , tr[u << 1].s + tr[u << 1 | 1].ls);
    tr[u].rs = max(tr[u << 1 | 1].rs, tr[u << 1].rs + tr[u << 1 | 1].s);
    tr[u].ms = max(tr[u << 1].rs + tr[u << 1 | 1].ls, max(tr[u << 1].ms, tr[u << 1 | 1].ms));
}

void modify(int u, int l, int r, int p, int v) {
    if (l == r) {
        tr[u].s = v;
        tr[u].ls = tr[u].rs = tr[u].ms = max(0, v);
        return;
    }
    int mid = l + r >> 1;
    if (p <= mid) modify(u << 1, l, mid, p, v);
    else modify(u << 1 | 1, mid + 1, r, p, v);
    pushup(u);
}

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        modify(1, 1, n, i, t);
    }
    while (q--) {
        int k, x;
        scanf("%d%d", &k, &x);
        modify(1, 1, n, k, x);
        printf("%lld\n", tr[1].ms);
    }
    return 0;
}
/**************************************************************
	Problem: 23123
	Language: C++
	Result: 正确
	Time:262 ms
	Memory:27224 kb
****************************************************************/