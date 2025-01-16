#include <cstdio>
#include <vector>

using namespace std;

const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
int n, m, tot;
char mp[20][20];
bool vis[20][20];
vector<pair<int, int>> v;

void dfs(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > m || vis[x][y]) return;
    if (x == n && y == m) {
        v.push_back({x, y});
        printf("%d:%d,%d", ++tot, v[0].first, v[0].second);
        for (int i = 1; i < v.size(); ++i) {
            printf("->%d,%d", v[i].first, v[i].second);
        }
        printf("\n");
        v.pop_back();
        return;
    }
    vis[x][y] = true;
    v.push_back({x, y});
    for (int i = 0; i < 4; ++i) {
        if (mp[x + dx[i]][y + dy[i]] == 'o') {
            dfs(x + dx[i], y + dy[i]);
        }
    }
    v.pop_back();
    vis[x][y] = false;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%s", mp[i] + 1);
    }
    dfs(1, 1);
    if (tot == 0) printf("no\n");
    return 0;
}
/**************************************************************
	Problem: 23866
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1364 kb
****************************************************************/