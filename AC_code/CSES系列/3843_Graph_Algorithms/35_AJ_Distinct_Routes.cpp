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
        add(y, x, 0);
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
    cout << max_flow << endl;
    for (int i = 0; i < max_flow; ++i) {
        memset(vis, 0, sizeof(vis));
        queue<int> q;
        q.push(n);
        vis[n] = true;
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            if (x == 1) break;
            for (int i = head[x]; i; i = ne[i]) {
                if (i & 1) {
                    int y = ver[i];
                    if (vis[y] || !w[i]) continue;
                    vis[y] = true;
                    pre[y] = i;
                    q.push(y);
                }
            }
        }
        if (!vis[1]) break;
        int y = 1;
        max_flow++;
        vector<int> res;
        do {
            res.push_back(y);
            w[pre[y]]--;
            y = ver[pre[y] ^ 1];
        } while (y != n);
        res.push_back(n);
        cout << res.size() << endl;
        for (int i : res) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23110
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2412 kb
****************************************************************/