#include <cstdio>
#include <queue>
#include <cstring>
 
using namespace std;
 
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
char mp[110][110];
int dis[110][110];
bool vis[110][110];
int n, m;
 
bool valid(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= m && mp[x][y] == '.';
}
 
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%s", mp[i] + 1);
    }
    pair<int, int> s, t;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (mp[i][j] == '@') {
                mp[i][j] = '.';
                s = {i, j};
            }
            else if (mp[i][j] == '*') {
                mp[i][j] = '.';
                t = {i, j};
            }
        }
    }
    queue<pair<int, int>> q;
    q.push(s);
    memset(dis, 0x3f, sizeof(dis));
    dis[s.first][s.second] = 0;
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
    printf("%d\n", dis[t.first][t.second] == 0x3f3f3f3f ? -1 : dis[t.first][t.second]);
    return 0;
}
/**************************************************************
	Problem: 21826
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1432 kb
****************************************************************/