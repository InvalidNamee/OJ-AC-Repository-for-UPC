#include <cstdio>
#include <queue>
#include <unordered_set>

using namespace std;

struct State {
    int l, m, x, y;
};

int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
bool vis[10][10][7];
int mp[10][10];

int main() {
    // freopen("input", "r", stdin);
    int n, m;
    pair<int, int> s, t;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &mp[i][j]);
            if (mp[i][j] == 2) s = {i, j}, mp[i][j] = 1;
            else if (mp[i][j] == 3) t = {i, j}, mp[i][j] = 1;
        }
    }
    queue<State> q;
    q.push({0, 6, s.first, s.second});
    vis[s.first][s.second][6] = true;
    while (!q.empty()) {
        int x = q.front().x, y = q.front().y, l = q.front().l, mm = q.front().m;
        q.pop();
        if (x == t.first && y == t.second) {
            printf("%d\n", l);
            return 0;
        }
        for (int i = 0; i < 4; ++i) {
            int tx = x + dx[i], ty = y + dy[i];
            if (0 < tx && tx <= n && 0 < ty && ty <= m && mp[tx][ty] != 0) {
                if (mp[tx][ty] == 1) {
                    if (mm <= 1 || vis[tx][ty][mm - 1]) continue;
                    else vis[tx][ty][mm - 1] = true, q.push({l + 1, mm - 1, tx, ty});
                }
                else {
                    if (mm <= 1 || vis[tx][ty][6]) continue;
                    else vis[tx][ty][6] = true, q.push({l + 1, 6, tx, ty});
                }
            }
        }
    }
    printf("-1\n");
    return 0;
}
/**************************************************************
	Problem: 23880
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1364 kb
****************************************************************/