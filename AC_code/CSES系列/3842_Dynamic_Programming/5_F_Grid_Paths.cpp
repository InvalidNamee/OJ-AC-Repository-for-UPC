#include <cstdio>
#include <iostream>

using namespace std;

const int MOD = 1e9 + 7;
bool valid[1010][1010];
int f[1010][1010];

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            valid[i][j] = getchar() == '.';
        }
        getchar();
    }
    for (int i = 1; i <= n; ++i) {
        if (!valid[i][1]) break;
        f[i][1] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (!valid[1][i]) break;
        f[1][i] = 1;
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 2; j <= n; ++j) {
            if (valid[i][j]) f[i][j] = (f[i - 1][j] + f[i][j - 1]) % MOD;
        }
    }
    printf("%d\n", f[n][n]);
    return 0;
}
/**************************************************************
	Problem: 23055
	Language: C++
	Result: 正确
	Time:159 ms
	Memory:7004 kb
****************************************************************/
