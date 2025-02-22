#include <iostream>
#include <cstring>

using namespace std;

const int N = 200010;

int head[N], ver[N * 2], ne[N * 2], tot = 1;
bool vis[N];
int rt, n, kl, kr;
int cnt[N], f[N], lim;
long long res;

void add_f(int u) {
    u++;
    for (int i = u; i <= lim + 1; i += i & -i) {
        f[i]++;
    }
}

int query(int u) {
    int res = 0;
    for (int i = u + 1; i; i -= i & -i) {
        res += f[i];
    }
    return res;
}

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

void dfs_cnt(int x, int fa) {
    cnt[x] = 1;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (y == fa || vis[y]) continue;
        dfs_cnt(y, x);
        cnt[x] += cnt[y];
    }
}

int find_rt(int x, int fa, int siz) {
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (y == fa || vis[y]) continue;
        if (cnt[y] > siz) return find_rt(y, x, siz);
    }
    return x;
}

void dfs_ans(int x, int fa, int dep) {
    if (dep > kr) return;
    int l = max(-1, kl - dep - 1), r = min(lim, kr - dep);
    if (l < r) res += query(r) - query(l);
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (y == fa || vis[y]) continue;
        dfs_ans(y, x, dep + 1);
    }
}

void dfs_f(int x, int fa, int dep) {
    if (dep > kr) return;
    add_f(dep);
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (y == fa || vis[y]) continue;
        dfs_f(y, x, dep + 1);
    }
}

void decompose(int x) {
    dfs_cnt(x, 0);
    int rt = find_rt(x, 0, cnt[x] / 2);
    memset(f, 0, sizeof(int) * (cnt[x] / 2 + 2));
    lim = cnt[x] / 2;
    vis[rt] = true;
    add_f(0);
    for (int i = head[rt]; i; i = ne[i]) {
        int y = ver[i];
        if (!vis[y]) {
            dfs_ans(y, 0, 1);
            dfs_f(y, 0, 1);
        }
    }
    for (int i = head[rt]; i; i = ne[i]) {
        if (!vis[ver[i]]) decompose(ver[i]);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> kl >> kr;
    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        add(x, y);
        add(y, x);
    }
    decompose(1);
    cout << res << endl;
    return 0;
}
/**************************************************************
	Problem: 23145
	Language: C++
	Result: 正确
	Time:659 ms
	Memory:20420 kb
****************************************************************/