#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;

int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
char mp[50][50];
int dis[50][50];
bool vis[50][50];
int n, m;

bool valid(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= m && mp[x][y] == '.';
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%s", mp[i] + 1);
    }
    queue<pair<int, int>> q;
    q.push({1, 1});
    memset(dis, 0x3f, sizeof(dis));
    dis[1][1] = 1;
    while (!q.empty()) {
        pair<int, int> x = q.front();
        q.pop();
        if (vis[x.first][x.second]) continue;
        vis[x.first][x.second] = true;
        for (int i = 0; i < 4; ++i) {
            if (valid(x.first + dx[i], x.second + dy[i]) && dis[x.first + dx[i]][x.second + dy[i]] > dis[x.first][x.second] + 1) {
                dis[x.first + dx[i]][x.second + dy[i]] = dis[x.first][x.second] + 1;
                q.push({x.first + dx[i], x.second + dy[i]});
            }
        }
    }
    printf("%d\n", dis[n][m]);
    return 0;
}
/**************************************************************
	Problem: 23861
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:1376 kb
****************************************************************/