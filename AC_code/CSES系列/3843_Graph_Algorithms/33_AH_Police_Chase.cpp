#include <iostream>
#include <queue>
#include <cstring>
#include <vector>

using namespace std;

const int N = 510, M = 1010;

int head[N], ne[M * 2], ver[M * 2], w[M * 2], tot = 1;
int pre[N];
bool vis[N];

void add(int x, int y, int z) {
    ver[++tot] = y;
    w[tot] = z;
    ne[tot] = head[x];
    head[x] = tot;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int x, y;
        cin >> x >> y;
        add(x, y, 1);
        add(y, x, 1);
    }
    int max_flow = 0;
    while (true) {
        memset(vis, 0, sizeof(vis));
        queue<int> q;
        q.push(1);
        vis[1] = true;
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            if (x == n) break;
            for (int i = head[x]; i; i = ne[i]) {
                int y = ver[i];
                if (vis[y] || !w[i]) continue;
                vis[y] = true;
                pre[y] = i;
                q.push(y);
            }
        }
        if (!vis[n]) break;
        int y = n;
        max_flow++;
        do {
            w[pre[y]]--, w[pre[y] ^ 1]++;
            y = ver[pre[y] ^ 1];
        } while (y != 1);
    }
    memset(vis, 0, sizeof(vis));
    queue<int> q;
    q.push(1);
    vis[1] = true;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        if (x == n) break;
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            if (vis[y] || !w[i]) continue;
            vis[y] = true;
            pre[y] = i;
            q.push(y);
        }
    }
    vector<pair<int, int>> res;
    for (int i = 2; i <= tot; i += 2) {
        if (vis[ver[i]] ^ vis[ver[i ^ 1]]) res.push_back({ver[i ^ 1], ver[i]});
    }
    cout << res.size() << endl;
    for (auto [x, y] : res) cout << x << ' ' << y << endl;
    return 0;
}
/**************************************************************
	Problem: 23108
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2412 kb
****************************************************************/