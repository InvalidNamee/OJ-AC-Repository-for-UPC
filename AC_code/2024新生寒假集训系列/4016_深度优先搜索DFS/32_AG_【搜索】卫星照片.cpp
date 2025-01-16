#include <cstdio>
#include <iostream>

using namespace std;

int dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};
char mp[110][110];
bool vis[110][110];
int n, m;
int lx, ly, rx, ry;
int cow, house;

bool valid(int x, int y) {
    return x > 0 && x <= n && y > 0 && y <= m && mp[x][y] == '#' && !vis[x][y];
}

void dfs(int x, int y) {
    if (!valid(x, y)) return;
    vis[x][y] = true;
    lx = min(lx, x), ly = min(ly, y), rx = max(rx, x), ry = max(ry, y);
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
            if (mp[i][j] == '#' && !vis[i][j]) {
                lx = 100, ly = 100, rx = 0, ry = 0;
                dfs(i, j);
                bool f = false;
                for (int i = lx; i <= rx; ++i) {
                    for (int j = ly; j <= ry; ++j) {
                        if (mp[i][j] == '.') {
                            f = true;
                            break;
                        }
                    }
                    if (f) break;
                }
                if (f) cow++;
                else house++;
            }
        }
    }
    printf("%d\n%d\n", house, cow);
    return 0;
}
/**************************************************************
	Problem: 3608
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/