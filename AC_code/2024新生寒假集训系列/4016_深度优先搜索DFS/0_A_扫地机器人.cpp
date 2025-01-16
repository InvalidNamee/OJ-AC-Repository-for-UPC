#include <cstdio>
#include <vector>

using namespace std;

int n, m, t;
vector<vector<int>> mp;

void dfs(int x, int y) {
    mp[x][y] = ++t;
    if (y + 1 < m && !mp[x][y + 1]) dfs(x, y + 1);
    else if (x + 1 < n && !mp[x + 1][y]) dfs(x + 1, y);
    else if (y - 1 >= 0 && !mp[x][y - 1]) dfs(x, y - 1);
    else if (x - 1 >= 0 && !mp[x - 1][y]) dfs(x - 1, y); 
}

int main() {
    scanf("%d%d", &n, &m);
    mp = vector<vector<int>>(n, vector<int>(m, 0));
    dfs(0, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%3d", mp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 21818
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:1360 kb
****************************************************************/