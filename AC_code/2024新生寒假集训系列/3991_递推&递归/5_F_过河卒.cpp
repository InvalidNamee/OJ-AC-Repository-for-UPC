#include <cstdio>
#include <vector>

using namespace std;

int n, m, x, y;
vector<vector<int>> f;

bool valid(int x, int y) {
    return x >= 0 && x <= n && y >= 0 && y <= m && f[x][y] != -1;
}

int main() {
    scanf("%d%d%d%d", &n, &m, &x, &y);
    f = vector<vector<int>>(n + 1, vector<int>(m + 1, 0));
    f[0][0] = 1;
    f[x][y] = -1;
    if (valid(x - 1, y - 2)) f[x - 1][y - 2] = -1;
    if (valid(x - 1, y + 2)) f[x - 1][y + 2] = -1;
    if (valid(x + 1, y - 2)) f[x + 1][y - 2] = -1;
    if (valid(x + 1, y + 2)) f[x + 1][y + 2] = -1;
    if (valid(x - 2, y + 1)) f[x - 2][y + 1] = -1;
    if (valid(x - 2, y - 1)) f[x - 2][y - 1] = -1;
    if (valid(x + 2, y - 1)) f[x + 2][y - 1] = -1;
    if (valid(x + 2, y + 1)) f[x + 2][y + 1] = -1;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (f[i][j] == -1) continue;
            if (valid(i - 1, j)) f[i][j] += f[i - 1][j];
            if (valid(i, j - 1)) f[i][j] += f[i][j - 1];
        }
    }
    printf("%d\n", f[n][m]);
    return 0;
}
/**************************************************************
	Problem: 23804
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/