#include <cstdio>
#include <cstring>
#include <iostream>
#include <unordered_set>

using namespace std;

int g[110][110];
unordered_set<int> val;
int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, 1, -1};
int head[10010], ne[40010], w[40010], ver[40010], tot;
int f[10010];
int n, m;

void add(int x, int y, int z) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
    w[tot] = z;
}

bool valid(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= m;
}

int dfs(int x, int d) {
    if (f[x]) return f[x];
    f[x] = 1;
    for (int i = head[x]; i; i = ne[i]) {
        int y = ver[i];
        if (w[i] == d) {
            f[x] = max(f[x], dfs(y, d) + 1);
        }
    }
    return f[x];
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &g[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            for (int k = 0; k < 4; ++k) {
                int x = i + dx[k], y = j + dy[k];
                if (valid(x, y) && g[x][y] > g[i][j]) {
                    add((i - 1) * m + j, (x - 1) * m + y, g[x][y] - g[i][j]);
                    val.insert(g[x][y] - g[i][j]);
                }
            }
        }
    }
    if (val.empty()) {
        printf("1\n");
        return 0;
    }
    int res = 0;
    for (auto d : val) {
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= n * m; ++i) {
            if (!f[i]) res = max(res, dfs(i, d));
        }
    }
    printf("%d\n", res);
    return 0;
}