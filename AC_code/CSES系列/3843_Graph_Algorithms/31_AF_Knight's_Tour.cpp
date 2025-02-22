#include <iostream>
#include <algorithm>
#include <tuple>
#include <queue>

using namespace std;
const int dx[] = {2, -2, 2, -2, 1, -1, 1, -1};
const int dy[] = {1, 1, -1, -1, 2, 2, -2, -2};
int dfn[10][10], t;

bool dfs(int x, int y) {
    // cout << x << ' ' << y << endl;
    if (dfn[x][y] == 64) return true;
    priority_queue<tuple<int, int, int>> q;
    for (int i = 0; i < 8; ++i) {
        int tx = x + dx[i], ty = y + dy[i];
        if (tx > 0 && tx <= 8 && ty > 0 && ty <= 8 && !dfn[tx][ty]) {
            int v = 0;
            for (int j = 0; j < 8; ++j) {
                if (tx + dx[j] > 0 && tx + dx[j] <= 8 && ty + dy[j] > 0 && ty + dy[j] <= 8 && !dfn[tx + dx[j]][ty + dy[j]]) {
                    v++;
                }
            }
            q.push({-v, tx, ty});
        }
    }
    while (!q.empty()) {
        auto [nouse, tx, ty] = q.top();
        q.pop();
        dfn[tx][ty] = ++t;
        if (dfs(tx, ty)) return true;
        dfn[tx][ty] = 0;
        t--;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int x, y;
    cin >> y >> x;
    dfn[x][y] = ++t;
    dfs(x, y);
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 8; ++j) {
            cout << dfn[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23106
	Language: C++
	Result: 正确
	Time:9 ms
	Memory:2384 kb
****************************************************************/