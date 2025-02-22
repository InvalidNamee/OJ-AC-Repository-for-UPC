#include <iostream>
#include <queue>

using namespace std;

int head[100010], ne[200010], ver[200010], tot;
int indeg[100010];
vector<int> ans;

void add(int x, int y) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
    indeg[y]++;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int x, y;
        cin >> x >> y;
        add(x, y);
    }
    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (!indeg[i]) q.push(i);
    }
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        ans.push_back(x);
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            if (--indeg[y] == 0) q.push(y);
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (indeg[i]) {
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
    }
    for (int i : ans) cout << i << ' ';
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23083
	Language: C++
	Result: 正确
	Time:61 ms
	Memory:5952 kb
****************************************************************/