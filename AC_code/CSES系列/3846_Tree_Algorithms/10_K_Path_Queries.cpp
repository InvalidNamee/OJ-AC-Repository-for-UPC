#include <iostream>
#include <vector>

using namespace std;

const int N = 200010;
long long tr[N];
int n, q;

void add(int u, int t) {
    for (int i = u; i <= n; i += i & -i) {
        tr[i] += t;
    }
}

long long query(int u) {
    long long res = 0;
    for (int i = u; i; i -= i & -i) {
        res += tr[i];
    }
    return res;
}

int s[N];
vector<int> ed[N];
int fa[N], son[N], cnt[N];
int top[N], rnk[N], dfn[N], t;

void dfs(int x) {
    cnt[x] = 1;
    for (int y : ed[x]) {
        if (y == fa[x]) continue;
        fa[y] = x;
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
    for (int y : ed[x]) {
        if (y == fa[x] || y == son[x]) continue;
        dfs(y, y);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
    }
    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dfs(1);
    dfs(1, 1);
    for (int i = 1; i <= n; ++i) {
        add(dfn[i], s[i]);
    }
    while (q--) {
        int opt;
        cin >> opt;
        if (opt == 1) {
            int x, v;
            cin >> x >> v;
            add(dfn[x], v - s[x]);
            s[x] = v;
        }
        else {
            int x;
            long long res = 0;
            cin >> x;
            do {
                res += query(dfn[x]) - query(dfn[top[x]] - 1);
                x = fa[top[x]];
            } while (x);
            cout << res << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23140
	Language: C++
	Result: 正确
	Time:221 ms
	Memory:34024 kb
****************************************************************/