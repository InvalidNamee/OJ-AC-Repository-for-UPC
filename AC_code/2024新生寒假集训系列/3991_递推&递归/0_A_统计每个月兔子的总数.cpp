#include <cstdio>

long long f[60];

int main() {
    f[1] = f[2] = 1;
    int n;
    scanf("%d", &n);
    for (int i = 3; i <= n; ++i) {
        f[i] = f[i - 2] + f[i - 1];
    }
    printf("%lld\n", f[n]);
    return 0;
}
/**************************************************************
	Problem: 23795
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/