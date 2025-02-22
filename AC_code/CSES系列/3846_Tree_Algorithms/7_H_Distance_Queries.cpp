#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> ed[200010];
int f[200010][20], dep[200010];

void dfs(int x) {
    for (int i = 1; i < 20; ++i) {
        f[x][i] = f[f[x][i - 1]][i - 1];
    }
    for (auto y : ed[x]) {
        if (y == f[x][0]) continue;
        f[y][0] = x;
        dep[y] = dep[x] + 1;
        dfs(y);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dep[1] = 1;
    dfs(1);
    while (q--) {
        int x, y, dist = 0;
        cin >> x >> y;
        if (dep[x] < dep[y]) swap(x, y);
        for (int i = 19; i >= 0; --i) {
            if (dep[f[x][i]] >= dep[y]) x = f[x][i], dist += 1 << i;
        }
        if (x != y) {
            for (int i = 19; i >= 0; --i) {
                if (f[x][i] != f[y][i]) {
                    x = f[x][i], y = f[y][i];
                    dist += 1 << i + 1;
                }
            }
            dist += 2;
            x = f[x][0];
        }
        cout << dist << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23137
	Language: C++
	Result: 正确
	Time:392 ms
	Memory:41760 kb
****************************************************************/