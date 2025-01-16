#include <cstdio>
#include <queue>

using namespace std;

int mp[110][110];
int head[10010], ne[30010], w[30010], ver[30010], tot;
int indeg[10010], dis[10010];

void add(int x, int y, int z) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
    w[tot] = z;
    indeg[y]++;
}

int main() {
    int n, m, s;
    scanf("%d%d%d", &n, &m, &s);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            s = (s * 345) % 19997;
            mp[i][j] = s % 10 + 1;
            // printf("%d ", mp[i][j]);
        }
        // printf("\n");
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i + 1 <= n && mp[i][j] < mp[i + 1][j]) add((i - 1) * m + j, i * m + j, mp[i + 1][j]);
            if (j + 1 <= m && mp[i][j] < mp[i][j + 1]) add((i - 1) * m + j, (i - 1) * m + j + 1, mp[i][j + 1]);
            if (i - 1 > 0 && mp[i][j] < mp[i - 1][j]) add((i - 1) * m + j, (i - 2) * m + j, mp[i - 1][j]);
            if (j - 1 > 0 && mp[i][j] < mp[i][j - 1]) add((i - 1) * m + j, (i - 1) * m + j - 1, mp[i][j - 1]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (indeg[(i - 1) * m + j] == 0) {
                add(0, (i - 1) * m + j, mp[i][j]);
            }
        }
    }
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            dis[y] = max(dis[y], dis[x] + w[i]);
            --indeg[y];
            if (!indeg[y]) q.push(y);
        }
    }
    int res = 0;
    for (int i = 1; i <= n * m; ++i) {
        res = max(res, dis[i]);
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 10423
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1880 kb
****************************************************************/