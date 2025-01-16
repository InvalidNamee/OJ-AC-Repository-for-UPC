#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

long long f[110][110];
int a[110][110];
pair<int, int> pre[110][110];
stringstream ss;

void print(int x, int y) {
    if (!pre[x][y].first) {
        return;
    }
    print(pre[x][y].first, pre[x][y].second);
    ss << '-' << a[x][y];
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &a[i][j]);
            if (f[i - 1][j] > f[i][j - 1]) f[i][j] = a[i][j] + f[i - 1][j], pre[i][j] = {i - 1, j};
            else f[i][j] = a[i][j] + f[i][j - 1], pre[i][j] = {i, j - 1};
        }
    }
    print(n, m);
    ss << endl;
    cout << ss.str().substr(1);
    return 0;
}
/**************************************************************
	Problem: 23807
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2512 kb
****************************************************************/