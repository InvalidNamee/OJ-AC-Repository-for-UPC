#include <cstdio>

int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
char mp[510][510];
bool f;
int t;
int n, m;

bool valid(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= m && mp[x][y] == '0';
}

void dfs(int x, int y) {
    if (!valid(x, y)) return;
    if (x == 1 || y == 1 || x == n || y == m) f = false;
    t++;
    mp[x][y] = '*';
    for (int i = 0; i < 4; ++i) {
        dfs(x + dx[i], y + dy[i]);
    }
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%s", mp[i] + 1);
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (mp[i][j] == '0') {
                f = true;
                t = 0;
                dfs(i, j);
                if (f) cnt += t;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
    Problem: 23874
    User: 2024UPC003 [王亚飞]
    Language: C++
    Result: 正确
    Time:3 ms
    Memory:1492 kb
****************************************************************/
