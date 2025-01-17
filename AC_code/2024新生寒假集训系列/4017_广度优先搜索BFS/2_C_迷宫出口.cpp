#include <cstdio>

int a[110][110], v[110][110];
int n;

void dfs(int x, int y) {
    if (v[x][y] || a[x][y]) return;
    v[x][y] = true;
    if (x < n) dfs(x + 1, y);
    if (y < n) dfs(x, y + 1);
    if (x > 1) dfs(x - 1, y);
    if (y > 1) dfs(x, y - 1);
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    int la, lb, ha, hb;
    scanf("%d%d%d%d", &la, &lb, &ha, &hb);
    dfs(la, lb);
    printf(v[ha][hb] ? "YES\n" : "NO\n");
    return 0;
}
/**************************************************************
	Problem: 21819
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1332 kb
****************************************************************/