#include <cstdio>
#include <queue>
#include <cstring>
 
using namespace std;
 
int dx[] = {1, 1, -1, -1, 2, 2, -2, -2}, dy[] = {2, -2, 2, -2, 1, -1, 1, -1};
char mp[160][160];
int dis[160][160];
bool vis[160][160];
int n, m;
 
bool valid(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= m && mp[x][y] == '.';
}
 
int main() {
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%s", mp[i] + 1);
    }
    pair<int, int> s, t;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (mp[i][j] == 'K') {
                mp[i][j] = '.';
                s = {i, j};
            }
            else if (mp[i][j] == 'H') {
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
        for (int i = 0; i < 8; ++i) {
            if (valid(x.first + dx[i], x.second + dy[i]) && dis[x.first + dx[i]][x.second + dy[i]] > dis[x.first][x.second] + 1) {
                dis[x.first + dx[i]][x.second + dy[i]] = dis[x.first][x.second] + 1;
                q.push({x.first + dx[i], x.second + dy[i]});
            }
        }
    }
    printf("%d\n", dis[t.first][t.second]);
    return 0;
}
/**************************************************************
	Problem: 21828
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1512 kb
****************************************************************/