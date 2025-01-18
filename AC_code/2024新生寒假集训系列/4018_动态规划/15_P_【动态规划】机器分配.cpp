#include <cstdio>
#include <iostream>
 
using namespace std;
 
int f[16][11], t[16][11];
 
int main() {
    int m, n;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &t[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            for (int k = 0; k <= j; ++k) {
                f[i][j] = max(f[i][j], f[i - 1][j - k] + t[i][k]);
            }
        }
    }
    int res = 0;
    for (int i = 0; i <= m; ++i) {
        res = max(res, f[n][i]);
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 2322
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2224 kb
****************************************************************/