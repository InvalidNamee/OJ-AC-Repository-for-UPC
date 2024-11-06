#include <cstdio>
#include <iostream>

using namespace std;

int a[60][60];
bool mark[1010];

int main() {
    mark[0] = mark[1] = true;
    for (int i = 2; i <= 1000; ++i) {
        if (mark[i]) continue;
        for (int j = 2; i * j <= 1000; ++j) {
            mark[i * j] = true;
        }
    }
    int n, m, cnt = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (!mark[a[i][j]] & mark[a[i - 1][j]] & mark[a[i + 1][j]] & mark[a[i][j - 1]] & mark[a[i][j + 1]] & mark[a[i - 1][j - 1]] & mark[a[i - 1][j + 1]] & mark[a[i + 1][j - 1]] & mark[a[i + 1][j + 1]])
                cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 22606
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2236 kb
****************************************************************/
