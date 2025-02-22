#include <iostream>

using namespace std;

const int N = 200010;
int tr[N * 4];
int n, q;

int s[N];
int head[N], ne[N * 2], ver[N * 2], tot;
int fa[N], dep[N], son[N], cnt[N];
int top[N], dfn[N], rnk[N], t;

void read(int &res) {
    res = 0;
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    while (isdigit(c)) res = res * 10 + c - 48, c = getchar();
}

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

void dfs(int x) {
    cnt[x] = 1;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (y == fa[x]) continue;
        fa[y] = x;
        dep[y] = dep[x] + 1;
        dfs(y);
        cnt[x] += cnt[y];
        if (cnt[y] > cnt[son[x]]) son[x] = y;
    }
}

void dfs(int x, int tp) {
    dfn[x] = ++t;
    top[x] = tp;
    rnk[t] = x;
    if (son[x]) {
        dfs(son[x], tp);
    }
    for (int i = head[x]; i; i = ne[i]) { 
        int y = ver[i];
        if (y == fa[x] || y == son[x]) continue;
        dfs(y, y);
    }
}


void pushup(int u) {
    tr[u] = max(tr[u << 1], tr[u << 1 | 1]);
}

void build(int u, int l, int r) {
    if (l == r) tr[u] = s[rnk[l]];
    else {
        int mid = l + r >> 1;
        build(u << 1, l, mid), build(u << 1 | 1, mid + 1, r);
        pushup(u);
    }
}

void modify(int u, int l, int r, int p, int v) {
    if (l == r) tr[u] = v;
    else {
        int mid = l + r >> 1;
        if (p <= mid) modify(u << 1, l, mid, p, v);
        else modify(u << 1 | 1, mid + 1, r, p, v);
        pushup(u);
    }
}

int query(int u, int l, int r, int ql, int qr) {
    if (ql <= l && r <= qr) return tr[u];
    else {
        int res = 0;
        int mid = l + r >> 1;
        if (ql <= mid) res = max(res, query(u << 1, l, mid, ql, qr));
        if (qr > mid) res = max(res, query(u << 1 | 1, mid + 1, r, ql, qr));
        return res;
    }
}

int main() {
    int opt, x, y;
    read(n), read(q);
    for (int i = 1; i <= n; ++i) {
        read(s[i]);
    }
    for (int i = 1; i < n; ++i) {
        read(x), read(y);
        add(x, y);
        add(y, x);
    }
    dep[1] = 1;
    dfs(1);
    dfs(1, 1);
    build(1, 1, n);
    while (q--) {
        read(opt), read(x), read(y);
        if (opt == 1) {
            modify(1, 1, n, dfn[x], y);
        }
        else {
            int res = 0;
            while (top[x] != top[y]) {
                if (dep[top[x]] < dep[top[y]]) swap(x, y);
                res = max(res, query(1, 1, n, dfn[top[x]], dfn[x]));
                x = fa[top[x]];
            }
            if (dfn[x] > dfn[y]) swap(x, y);
            res = max(res, query(1, 1, n, dfn[x], dfn[y]));
            printf("%d ", res);
        }
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23141
	Language: C++
	Result: 正确
	Time:785 ms
	Memory:26116 kb
****************************************************************/