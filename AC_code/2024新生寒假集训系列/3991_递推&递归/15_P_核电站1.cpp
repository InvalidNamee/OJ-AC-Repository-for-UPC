#include <cstdio>

long long f[50][3];

int main() {
    int n;
    scanf("%d", &n);
    f[0][0] = 1;
    for (int i = 1; i <= n; ++i) {
        f[i][0] = f[i - 1][0] + f[i - 1][1] + f[i - 1][2];
        f[i][1] = f[i - 1][0];
        f[i][2] = f[i - 1][1];
    }
    printf("%lld\n", f[n][0] + f[n][1] + f[n][2]);
    return 0;
}
/**************************************************************
	Problem: 23818
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/