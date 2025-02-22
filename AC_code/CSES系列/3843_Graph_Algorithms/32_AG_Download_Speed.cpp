#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
#include <climits>

using namespace std;

const int N = 510, M = 1010;
int head[N], ver[M * 2], ne[M * 2], w[M * 2], tot = 1;
int pre[N], vis[N], dis[N];

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
        int x, y, z;
        cin >> x >> y >> z;
        add(x, y, z);
        add(y, x, 0);
    }
    long long max_flow = 0;
    while (true) {
        memset(vis, 0, sizeof(vis));
        queue<int> q;
        q.push(1);
        dis[1] = INT_MAX;
        vis[1] = true;
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            if (x == n) break;
            for (int i = head[x]; i; i = ne[i]) {
                int y = ver[i];
                if (vis[y] || !w[i]) continue;
                dis[y] = min(dis[x], w[i]);
                vis[y] = true;
                pre[y] = i;
                q.push(y);
            }
        }
        if (!vis[n]) break;
        max_flow += dis[n];
        int y = n;
        do {
            w[pre[y]] -= dis[n], w[pre[y] ^ 1] += dis[n];
            y = ver[pre[y] ^ 1];
        } while (y != 1);
    }
    cout << max_flow << endl;
    return 0;
}
/**************************************************************
	Problem: 23107
	Language: C++
	Result: 正确
	Time:248 ms
	Memory:2412 kb
****************************************************************/