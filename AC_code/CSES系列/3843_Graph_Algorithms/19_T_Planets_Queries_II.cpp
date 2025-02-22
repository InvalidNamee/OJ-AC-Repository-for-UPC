#include <iostream>
#include <vector>

using namespace std;

const int N = 200010;
int head[N], ver[N * 2], ne[N * 2], tot = 1;
int s[N], pre[N], vis[N], dep[N], siz[N], f[N][20], fa[N], cnt;
bool incir[N], v[N];
bool first;
vector<int> c;

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

void dfs(int x) {
    if (vis[x]) return;
    vis[x] = cnt;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        dfs(y);
    }
}

void dfs(int x, int p) {
    if (v[x]) {
        if (!first) return;
        first = false;
        int t = x, m = 0;
        do {
            s[t] = ++m;
            incir[t] = true;
            c.push_back(t);
            t = pre[t];
        } while (t != x);
        return;
    }
    v[x] = true;
    for (int i = head[x]; i; i = ne[i]) {
        if ((i & 1) || i == (p ^ 1)) continue;
        int y = ver[i];
        pre[y] = x;
        dfs(y, i);
    }
}

void dfs2(int x, int ff) {
    fa[x] = ff;
    for (int i = 1; i < 17; ++i) {
        f[x][i] = f[f[x][i - 1]][i - 1];
    }
    for (int i = head[x]; i; i = ne[i]) {
        if ((i % 2 == 0 || incir[ver[i]])) continue;
        int y = ver[i];
        dep[y] = dep[x] + 1;
        f[y][0] = x;
        dfs2(y, ff);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        add(i, t);
        add(t, i);
    }
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            ++cnt;
            first = true;
            dfs(i);
            dfs(i, 0);
            siz[cnt] = c.size();
            for (int j : c) {
                dep[j] = 0;
                s[j] = siz[cnt] - s[j];
                dfs2(j, j);
            }
            c.clear();
        }
    }
    while (q--) {
        int x, y;
        cin >> x >> y;
        if (vis[x] == vis[y]) {
            if (incir[y]) {
                // cout << dep[x] << ' ' << s[fa[x]] << ' ' << s[y] << endl;
                cout << dep[x] + ((s[y] - s[fa[x]] + siz[vis[x]]) % siz[vis[x]]) << endl;
            }
            else if (fa[x] == fa[y]) {
                if (dep[x] < dep[y]) cout << -1 << endl;
                else {
                    int res = 0;
                    for (int i = 16; i >= 0; --i) {
                        if (dep[f[x][i]] >= dep[y]) {
                            res += (1 << i);
                            x = f[x][i];
                        }
                    }
                    if (x == y) cout << res << endl;
                    else cout << -1 << endl;
                }
            }
            else cout << -1 << endl;
        }  
        else cout << -1 << endl;
    }
    return 0;
}

/**************************************************************
	Problem: 23094
	Language: C++
	Result: 正确
	Time:225 ms
	Memory:44068 kb
****************************************************************/