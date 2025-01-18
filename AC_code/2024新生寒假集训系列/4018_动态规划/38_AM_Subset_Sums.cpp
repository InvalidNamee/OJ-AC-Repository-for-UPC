#include <cstdio>

long long f[400];

int main() {
    int n;
    scanf("%d", &n);
    if (n * (n + 1) / 2 % 2 != 0) {
        printf("0\n");
        return 0;
    }
    int m = n * (n + 1) / 4;
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = m; j >= i; --j) {
            f[j] += f[j - i]; 
        }
    }
    printf("%lld\n", f[m] / 2);
    return 0;
}
/**************************************************************
	Problem: 8078
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/