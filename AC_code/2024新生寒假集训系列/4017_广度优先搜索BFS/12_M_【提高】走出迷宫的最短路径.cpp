#include <cstdio>
#include <queue>

using namespace std;

const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
int mp[160][160], dis[160][160];
bool vis[160][160];
pair<int, int> pre[160][160];

void print(pair<int, int> x) {
    if (!x.first) return;
    print(pre[x.first][x.second]);
    printf("(%d,%d)->", x.first, x.second);
}

int main() {
    int n, m;
    pair<int, int> s, t;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &mp[i][j]);
        }
    }
    scanf("%d%d%d%d", &s.first, &s.second, &t.first, &t.second);
    queue<pair<int, int>> q;
    q.push(s);
    vis[s.first][s.second] = true;
    while (!q.empty()) {
        pair<int, int> x = q.front();
        q.pop();
        if (x == t) {
            print(pre[x.first][x.second]);
            printf("(%d,%d)\n", x.first, x.second);
            return 0;
        }
        for (int i = 0; i < 4; ++i) {
            pair<int, int> y = x;
            y.first += dx[i], y.second += dy[i];
            if (0 < y.first && y.first <= n && 0 < y.second && y.second <= m && !mp[y.first][y.second] && !vis[y.first][y.second]) {
                vis[y.first][y.second] = true;
                dis[y.first][y.second] = dis[x.first][x.second] + 1;
                pre[y.first][y.second] = x;
                q.push(y);
            }
        }
    }
    printf("no way\n");
    return 0;
}
/**************************************************************
	Problem: 23885
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1788 kb
****************************************************************/