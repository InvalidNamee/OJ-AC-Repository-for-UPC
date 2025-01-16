#include <cstdio>
#include <vector>

using namespace std;

const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
int n, tot;
bool vis[25][25];
vector<pair<int, int>> v;

void dfs(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > n) return;
    if (x == n && y == n) {
        v.push_back({n, n});
        printf("%d:%d,%d", ++tot, v[0].first, v[0].second);
        for (int i = 1; i < v.size(); ++i) {
            printf("->%d,%d", v[i].first, v[i].second);
        }
        printf("\n");
        v.pop_back();
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if (!vis[x][y]) {
            v.push_back({x, y});
            vis[x][y] = true;
            dfs(x + dx[i], y + dy[i]);
            vis[x][y] = false;
            v.pop_back();
        }
    }
}

int main() {
    scanf("%d", &n);
    dfs(1, 1);
    return 0;
}
/**************************************************************
	Problem: 23865
	Language: C++
	Result: 正确
	Time:28 ms
	Memory:1364 kb
****************************************************************/