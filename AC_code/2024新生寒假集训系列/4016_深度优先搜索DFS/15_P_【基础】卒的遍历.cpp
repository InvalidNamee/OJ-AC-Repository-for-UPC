#include <cstdio>
#include <vector>

using namespace std;

const int dx[] = {1, 0}, dy[] = {0, 1};
int n, m;
bool vis[25][25];
int cnt = 0;
vector<pair<int, int>> v;

void dfs(int x, int y) {
    if (x < 1 || x > n || y < 1 || y > m) return;
    if (x == n && y == m) {
        v.push_back({n, m});
        printf("%d:%d,%d", ++cnt, v[0].first, v[0].second);
        for (int i = 1; i < v.size(); ++i) {
            printf("->%d,%d", v[i].first, v[i].second);
        }
        printf("\n");
        v.pop_back();
        return;
    }
    for (int i = 0; i < 2; ++i) {
        if (!vis[x][y]) {
            v.push_back({x, y});
            dfs(x + dx[i], y + dy[i]);
            v.pop_back();
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    dfs(1, 1);
    return 0;
}
/**************************************************************
	Problem: 23863
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1364 kb
****************************************************************/