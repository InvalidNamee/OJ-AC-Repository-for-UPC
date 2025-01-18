#include <cstdio>

long long f[4010];

int main() {
    int n;
    scanf("%d", &n);
    f[0] = 1;
    for (int i = 1; i < n; ++i) {
        for (int j = i; j <= n; ++j) {
            f[j] = (f[j] + f[j - i]) % 2147483648;
        }
    }
    printf("%lld\n", f[n]);
    return 0;
}
/**************************************************************
	Problem: 23905
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1268 kb
****************************************************************/