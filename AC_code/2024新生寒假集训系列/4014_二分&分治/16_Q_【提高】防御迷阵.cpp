#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

typedef pair<int, pair<int, int>> piii;

int at[1010][1010], dis[1010][1010];
bool v[1010][1010];
int dx[] = {0, 0, -1, 1}, dy[] = {1, -1, 0, 0};
priority_queue<piii, vector<piii>, greater<piii>> q;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &at[i][j]);
        }
    }
    memset(dis, 0x3f, sizeof(dis));
    dis[1][1] = 0;
    q.push({0, {1, 1}});
    while (!q.empty()) {
        pair<int, int> x = q.top().second;
        q.pop();
        if (v[x.first][x.second]) continue;
        for (int i = 0; i < 4; ++i) {
            pair<int, int> y = x;
            y.first += dx[i], y.second += dy[i];
            if (0 < y.first && y.first <= n && 0 < y.second && y.second <= m && dis[y.first][y.second] > max(dis[x.first][x.second], at[y.first][y.second])) {
                dis[y.first][y.second] = max(dis[x.first][x.second], at[y.first][y.second]);
                q.push({dis[y.first][y.second], y});
            }
        }
    }
    int res = 0x3f3f3f3f;
    for (int i = 1; i <= m; ++i) {
        res = min(res, dis[n][i]);
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 23859
	Language: C++
	Result: 正确
	Time:348 ms
	Memory:20492 kb
****************************************************************/