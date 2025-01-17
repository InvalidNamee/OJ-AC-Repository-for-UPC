#include <cstdio>
#include <queue>

using namespace std;

const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
int mark[110][110];
queue<pair<int, int>> q;

int main() {
    int n, m, t = 0;
    scanf("%d%d", &n, &m);
    mark[1][1] = ++t;
    q.push({1, 1});
    while (!q.empty()) {
        pair<int, int> x = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i) {
            pair<int, int> y = x;
            y.first += dx[i], y.second += dy[i];
            if (1 <= y.first && y.first <= n && 1 <= y.second && y.second <= m && !mark[y.first][y.second]) {
                mark[y.first][y.second] = ++t;
                q.push(y);
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            printf("%d ", mark[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 23881
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1408 kb
****************************************************************/