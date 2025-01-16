#include <cstdio>
#include <vector>

using namespace std;

const int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0};
int mp[25][25], n;
bool vis[25][25];
vector<pair<int, int>> v;

bool dfs(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > n || mp[x][y]) return false;
    if (x == n && y == n) {
        v.push_back({n, n});
        printf("(%d,%d)", v[0].first, v[0].second);
        for (int i = 1; i < v.size(); ++i) {
            printf("->(%d,%d)", v[i].first, v[i].second);
        }
        printf("\n");
        return true;
    }
    for (int i = 0; i < 4; ++i) {
        if (!vis[x][y]) {
            v.push_back({x, y});
            vis[x][y] = true;
            if (dfs(x + dx[i], y + dy[i])) return true;
            vis[x][y] = false;
            v.pop_back();
        }
    }
    return false;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%1d", &mp[i][j]);
        }
    }
    dfs(1, 1);
    return 0;
}
/**************************************************************
	Problem: 23862
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1364 kb
****************************************************************/