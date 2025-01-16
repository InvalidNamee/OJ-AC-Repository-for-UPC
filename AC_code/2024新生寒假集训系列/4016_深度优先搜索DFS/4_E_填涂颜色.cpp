#include <cstdio>

int mp[40][40];
int n;

void dfs(int x, int y) {
    if (!(x > 0 && x <= n && y > 0 && y <= n && mp[x][y] == 0)) return;
    mp[x][y] = 2;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &mp[i][j]);
        }
    }
    bool ok = false;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (mp[i][j] == 0) {
                int f = 0;
                for (int k = 1; k < i; ++k) {
                    if (mp[k][j]) {
                        f++;
                        break;
                    }
                }
                for (int k = n; k > i; --k) {
                    if (mp[k][j]) {
                        f++;
                        break;
                    }
                }
                for (int k = 1; k < j; ++k) {
                    if (mp[i][k]) {
                        f++;
                        break;
                    }
                }
                for (int k = n; k > j; --k) {
                    if (mp[i][k]) {
                        f++;
                        break;
                    }
                }
                if (f == 4) {
                    dfs(i, j);
                    ok = true;
                    break;
                }
            }
        }
        if (ok) break;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%d ", mp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 21822
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1244 kb
****************************************************************/