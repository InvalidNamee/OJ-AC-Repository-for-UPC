#include <cstdio>

bool mp[1010][1010], v[1010][1010];
int n, m, tot;

bool valid(int x, int y) {
    return x <= n && y <= m && x > 0 && y > 0 && mp[x][y];
}

void dfs(int x, int y) {
    if (v[x][y]) return;
    v[x][y] = true;
    if (valid(x, y + 1)) dfs(x, y + 1);
    if (valid(x, y - 1)) dfs(x, y - 1);
    if (valid(x - 1, y)) dfs(x - 1, y);
    if (valid(x + 1, y)) dfs(x + 1, y);
}

int main() {
    scanf("%d%d", &n, &m);
    getchar();
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            mp[i][j] = getchar() == '.';
        }
        getchar();
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (valid(i, j) && !v[i][j]) {
                tot++;
                dfs(i, j);
            }
        }
    }
    printf("%d\n", tot);
    return 0;
}
/**************************************************************
	Problem: 23069
	Language: C++
	Result: 正确
	Time:102 ms
	Memory:96760 kb
****************************************************************/