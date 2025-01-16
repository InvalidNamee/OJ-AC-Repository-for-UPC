#include <cstdio>
#include <cstring>

long long f[60][3][3];

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        if (n == 1) {
            printf("3\n");
            continue;
        }
        memset(f, 0, sizeof(f));
        f[1][0][0] = 1;
        f[1][1][1] = 1;
        f[1][2][2] = 1;
        for (int i = 2; i <= n; ++i) {
            for (int j = 0; j < 3; ++j) {
                f[i][0][j] = f[i - 1][1][j] + f[i - 1][2][j];
                f[i][1][j] = f[i - 1][0][j] + f[i - 1][2][j];
                f[i][2][j] = f[i - 1][0][j] + f[i - 1][1][j];
            }
        }
        printf("%lld\n", f[n][0][1] + f[n][0][2] + f[n][1][0] + f[n][1][2] + f[n][2][0] + f[n][2][1]);
    }
    return 0;
}
/**************************************************************
	Problem: 1269
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/