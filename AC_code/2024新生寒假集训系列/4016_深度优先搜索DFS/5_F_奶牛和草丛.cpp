#include <cstdio>

int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
char mp[110][110];
int n, m;

bool valid(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= m && mp[x][y] == '#';
}

void dfs(int x, int y) {
    if (!valid(x, y)) return;
    mp[x][y] = '.';
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
            if (mp[i][j] == '#') {
                cnt++;
                dfs(i, j);
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 21823
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1248 kb
****************************************************************/