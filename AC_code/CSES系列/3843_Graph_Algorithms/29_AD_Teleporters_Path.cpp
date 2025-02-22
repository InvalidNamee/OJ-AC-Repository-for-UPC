#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int N = 100010, M = 200010;
vector<int> ed[N];
int indeg[N], odeg[N];
vector<int> path;
int n, m;

void dfs(int x) {
    while (!ed[x].empty()) {
        int y = ed[x].back();
        ed[x].pop_back();
        dfs(y);
    }
    path.push_back(x);
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        ed[x].push_back(y);
        odeg[x]++, indeg[y]++;
        
    }
    if (indeg[1] != odeg[1] - 1 || indeg[n] != odeg[n] + 1) {
        printf("IMPOSSIBLE\n");
        return 0;
    }
    for (int i = 2; i < n; ++i) {
        if (indeg[i] != odeg[i]) {
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
	Problem: 23104
	Language: C++
	Result: 正确
	Time:103 ms
	Memory:22984 kb
****************************************************************/