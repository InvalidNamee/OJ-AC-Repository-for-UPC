#include <cstdio>
#include <cstring>

long long f[50][2];

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        memset(f, 0, sizeof(f));
        f[0][1] = 1;
        for (int i = 1; i <= n; ++i) {
            f[i][0] = f[i - 1][1];
            f[i][1] = 2 * (f[i - 1][0] + f[i - 1][1]);
        }
        printf("%lld\n", f[n][0] + f[n][1]);
    }
    return 0;
}
/**************************************************************
	Problem: 1268
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/