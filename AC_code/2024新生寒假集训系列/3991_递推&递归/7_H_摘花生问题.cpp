#include <cstdio>
#include <iostream>

using namespace std;

long long f[100][100];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%lld", &f[i][j]);
            f[i][j] += max(f[i - 1][j], f[i][j - 1]);
        }
    }
    printf("%lld\n", f[n][m]);
    return 0;
}
/**************************************************************
	Problem: 23806
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2300 kb
****************************************************************/