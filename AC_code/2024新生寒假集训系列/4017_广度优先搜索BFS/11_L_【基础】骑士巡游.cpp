#include <cstdio>
#include <queue>

using namespace std;

const int dx[] = {2, 1, -1, -2, 2, 1, -1, -2}, dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
bool vis[10][10];

int main() {
    int n, m;
    pair<int, int> s, t;
    scanf("%d%d%d%d%d%d", &n, &m, &s.first, &s.second, &t.first, &t.second);
    queue<pair<int, pair<int, int>>> q;
    q.push({0, s});
    while (!q.empty()) {
        int l = q.front().first;
        pair<int, int> x = q.front().second;
        q.pop();
        if (x == t) {
            printf("%d\n", l);
            return 0;
        }
        for (int i = 0; i < 8; ++i) {
            pair<int, int> y = x;
            y.first += dx[i], y.second += dy[i];
            if (0 < y.first && y.first <= n && 0 < y.second && y.second <= m && !vis[y.first][y.second]) {
                vis[y.first][y.second] = true;
                q.push({l + 1, y});
            }
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23884
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/