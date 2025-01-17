#include <cstdio>
#include <queue>

using namespace std;

int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
int vis[1010][1010], mp[1010][1010];
int cnt[1000010];
queue<pair<int, int>> q;

int main() {
    int n, m, t = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%1d", &mp[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (!vis[i][j]) {
                q.push({i, j});
                vis[i][j] = ++t;
                cnt[t] = 1;
                while (!q.empty()) {
                    pair<int, int> x = q.front();
                    q.pop();
                    for (int k = 0; k < 4; ++k) {
                        pair<int, int> y = x;
                        y.first += dx[k], y.second += dy[k];
                        if (0 < y.first && y.first <= n && 0 < y.second && y.second <= n && !vis[y.first][y.second] && (mp[x.first][x.second] ^ mp[y.first][y.second])) {
                            vis[y.first][y.second] = t;
                            cnt[t]++;
                            q.push(y);
                        }
                    }
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        printf("%d\n", cnt[vis[x][y]]);
    }
    return 0;
}

/*
3 3 
100
010
010
1 1 
1 3
3 1
*/
/**************************************************************
	Problem: 23886
	Language: C++
	Result: 正确
	Time:171 ms
	Memory:13240 kb
****************************************************************/