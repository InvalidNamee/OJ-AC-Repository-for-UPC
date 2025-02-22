#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> ed[200010];
int f[200010][20], dep[200010];
int cnt[200010];

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

void dp(int x) {
    for (int y : ed[x]) {
        if (y == f[x][0]) continue;
        dp(y);
        cnt[x] += cnt[y];
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
        cnt[x]++, cnt[y]++;
        if (dep[x] < dep[y]) swap(x, y);
        for (int i = 19; i >= 0; --i) {
            if (dep[f[x][i]] >= dep[y]) x = f[x][i];
        }
        if (x != y) {
            for (int i = 19; i >= 0; --i) {
                if (f[x][i] != f[y][i]) {
                    x = f[x][i], y = f[y][i];
                }
            }
            x = f[x][0];
        }
        cnt[x]--, cnt[f[x][0]]--;
    }
    dp(1);
    for (int i = 1; i <= n; ++i) {
        cout << cnt[i] << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23138
	Language: C++
	Result: 正确
	Time:470 ms
	Memory:37716 kb
****************************************************************/