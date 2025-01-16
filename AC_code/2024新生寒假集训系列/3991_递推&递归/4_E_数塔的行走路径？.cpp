#include <cstdio>
#include <iostream>

using namespace std;

int f[110][110];
pair<int, int> pre[110][110];

void print(int x, int y) {
    if (!pre[x][y].first) {
        printf("%d,%d", x, y);
        return;
    }
    print(pre[x][y].first, pre[x][y].second);
    printf("->%d,%d", x, y);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            scanf("%d", &f[i][j]);
        }
    }
    for (int i = n - 1; i; --i) {
        for (int j = 1; j <= i; ++j) {
            if (f[i + 1][j] > f[i + 1][j + 1]) f[i][j] += f[i + 1][j], pre[i][j] = make_pair(i + 1, j);
            else f[i][j] += f[i + 1][j + 1], pre[i][j] = make_pair(i + 1, j + 1);
        }
    }
    print(1, 1);
    printf("\n%d\n", f[1][1]);
    return 0;
}
/**************************************************************
	Problem: 23802
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2364 kb
****************************************************************/