#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;

inline int read() {
    char c = getchar();
    int res = 0;
    while (!isdigit(c)) c = getchar();
    while (isdigit(c)) {
        res = res * 10 + c - 48;
        c = getchar();
    }
    return res;
}

long long f[510][510];

int main() {
    int n = read(), m = read(), q = read();
    memset(f, 0x3f, sizeof(f));
    for (int i = 1; i <= m; ++i) {
        int x = read(), y = read(), z = read();
        f[x][y] = f[y][x] = min(f[x][y], (long long)z);
    }
    for (int i = 1; i <= n; ++i) {
        f[i][i] = 0;
    }
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
            }
        }
    }
    // for (int i = 1; i <= n; ++i) {
    //     for (int j = 1; j <= n; ++j) {
    //         printf("%lld ", f[i][j]);
    //     }
    //     printf("\n");
    // }
    while (q--) {
        int x = read(), y = read();
        printf("%lld\n", f[x][y] == 4557430888798830399 ? -1 : f[x][y]);
    }
    return 0;
}

/**************************************************************
	Problem: 23077
	Language: C++
	Result: 正确
	Time:182 ms
	Memory:4252 kb
****************************************************************/