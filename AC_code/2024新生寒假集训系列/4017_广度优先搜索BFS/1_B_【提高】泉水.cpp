#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
int dis[1010][1010], mp[1010][1010];
bool vis[1010][1010];
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;

int main() {
    int n, m, t = 0;
    pair<int, int> p;
    scanf("%d%d%d%d", &n, &m, &p.first, &p.second);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &mp[i][j]);
        }
    }
    memset(dis, 0x3f, sizeof(dis));
    dis[p.first][p.second] = mp[p.first][p.second];
    q.push({dis[p.first][p.second], p});
    while (!q.empty()) {
        pair<int, int> x = q.top().second;
        q.pop();
        if (vis[x.first][x.second]) continue;
        vis[x.first][x.second] = true;
        for (int i = 0; i < 4; ++i) {
            pair<int, int> y = x;
            y.first += dx[i], y.second += dy[i];
            if (1 <= y.first && y.first <= n && 1 <= y.second && y.second <= m && dis[y.first][y.second] > max(dis[x.first][x.second], mp[y.first][y.second])) {
                dis[y.first][y.second] = max(dis[x.first][x.second], mp[y.first][y.second]);
                q.push({dis[y.first][y.second], y});
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (dis[i][j] == dis[p.first][p.second]) {
                t++;
            }
        }
    }
    printf("%d\n", t);
    return 0;
}
/**************************************************************
	Problem: 23882
	Language: C++
	Result: 正确
	Time:4 ms
	Memory:10328 kb
****************************************************************/