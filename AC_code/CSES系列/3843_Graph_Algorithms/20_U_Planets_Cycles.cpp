#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int N = 200010;
int head[N], ver[N * 2], ne[N * 2], tot = 1;
int res[N], pre[N];
bool vis[N];
bool first;
vector<int> c;

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
}

void dfs(int x, int p) {
    if (vis[x]) {
        if (!first) return;
        first = false;
        int t = x;
        do {
            c.push_back(t);
            t = pre[t];
        } while (t != x);
        return;
    }
    vis[x] = true;
    for (int i = head[x]; i; i = ne[i]) {
        if (i == (p ^ 1)) continue;
        int y = ver[i];
        pre[y] = x;
        dfs(y, i);
    }
}

void dfs(int x) {
    if (res[x]) return;
    for (int i = head[x]; i; i = ne[i]) {
        if (i & 1) continue;
        dfs(ver[i]);
        res[x] = res[ver[i]] + 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        add(i, t);
        add(t, i);
    }
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            first = true;
            dfs(i, 0);
            for (int j : c) {
                res[j] = c.size();
            }
            c.clear();
        }
    }
    for (int i = 1; i <= n; ++i) {
        dfs(i);   
        cout << res[i] << ' ';
    }
    cout << endl;
    return 0;
}

/**************************************************************
	Problem: 23095
	Language: C++
	Result: 正确
	Time:99 ms
	Memory:25124 kb
****************************************************************/