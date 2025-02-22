#include <iostream>
#include <vector>
#include <sstream>
#include <cstring>

using namespace std;

const int N = 510, M = 1010;

vector<int> ed[N];
bool vis[N];
int match[N];

bool dfs(int x) {
    for (int y : ed[x]) {
        if (vis[y]) continue;
        vis[y] = true;
        if (!match[y] || dfs(match[y])) {
            vis[y] = true;
            match[y] = x;
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // stringstream cin("3 2 4 1 1 1 2 2 1 3 1");
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= k; ++i) {
        int a, b;
        cin >> a >> b;
        ed[a].push_back(b);
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        // cout << i << endl;
        memset(vis, 0, sizeof(vis));
        if (dfs(i)) cnt++;
    }
    cout << cnt << endl;
    for (int i = 1; i <= m; ++i) {
        if (match[i]) {
            cout << match[i] << ' ' << i << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23109
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2396 kb
****************************************************************/