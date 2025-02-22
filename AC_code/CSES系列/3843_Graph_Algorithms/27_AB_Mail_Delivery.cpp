#include <iostream>
#include <vector>

using namespace std;

const int N = 100010, M = 200010;
vector<pair<int, int>> ed[N];
bool vis[M];
int deg[N];
vector<int> path;
int n, m;

void dfs(int x) {
    while (!ed[x].empty()) {
        auto [y, t] = ed[x].back();
        ed[x].pop_back();
        if (vis[t]) continue;
        vis[t] = true;
        dfs(y);
    }
    path.push_back(x);
}

int main() {
    // freopen("input", "r", stdin);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        ed[x].push_back({y, i});
        ed[y].push_back({x, i});
        deg[x]++, deg[y]++;
    }
    for (int i = 1; i <= n; ++i) {
        if (deg[i] & 1) {
            printf("IMPOSSIBLE\n");
            return 0;
        }
    }
    dfs(1);
    if (path.size() == m + 1) for (int i = path.size() - 1; i >= 0; --i) printf("%d ", path[i]);
    else printf("IMPOSSIBLE");
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23102
	Language: C++
	Result: 正确
	Time:125 ms
	Memory:21532 kb
****************************************************************/