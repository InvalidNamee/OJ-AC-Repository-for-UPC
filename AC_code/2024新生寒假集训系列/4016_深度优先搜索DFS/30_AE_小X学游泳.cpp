#include <cstdio>

const int dx[] = {0, 0, -1, 1}, dy[] = {1, -1, 0, 0};
int a[110][110], cnt;
bool v[110][110];
int n, m;

void dfs(int x, int y, int t) {
    if (x < 1 || x > n || y < 1 || y > m || a[x][y] != t || v[x][y]) return;
    cnt++;
    v[x][y] = true;
    for (int i = 0; i < 4; ++i) {
        dfs(x + dx[i], y + dy[i], t);
    }
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%1d", &a[i][j]);
        }
    }
    int res = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (!v[i][j]) {
                cnt = 0;
                dfs(i, j, a[i][j]);
                res = res > cnt ? res : cnt;
            }
        }
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 10447
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1780 kb
****************************************************************/