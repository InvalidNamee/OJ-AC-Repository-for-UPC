#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
int mp[50][50], dis[50][50];
bool vis[50][50];
int n, m;

bool valid(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= m;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &mp[i][j]);
        }
    }
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
    memset(dis, 0x3f, sizeof(dis));
    q.push({mp[1][1], {1, 1}});
    dis[1][1] = mp[1][1];
    while (!q.empty()) {
        pair<int, int> x = q.top().second;
        q.pop();
        if (vis[x.first][x.second]) continue;
        vis[x.first][x.second] = true;
        for (int i = 0; i < 4; ++i) {
            if (valid(x.first + dx[i], x.second + dy[i]) && dis[x.first + dx[i]][x.second + dy[i]] > dis[x.first][x.second] + mp[x.first + dx[i]][x.second + dy[i]]) {
                dis[x.first + dx[i]][x.second + dy[i]] = dis[x.first][x.second] + mp[x.first + dx[i]][x.second + dy[i]];
                q.push({dis[x.first + dx[i]][x.second + dy[i]], {x.first + dx[i], x.second + dy[i]}});
            }
        }
    }
    printf("%d\n", dis[n][m]);
    return 0;
}
/**************************************************************
	Problem: 10440
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1384 kb
****************************************************************/