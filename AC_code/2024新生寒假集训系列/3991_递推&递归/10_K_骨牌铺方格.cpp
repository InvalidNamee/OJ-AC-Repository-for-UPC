#include <cstdio>

long long f[51];

int main() {
    f[0] = 1;
    f[1] = 1;
    f[2] = 2;
    int n;
    scanf("%d", &n);
    for (int i = 3; i <= n; ++i) {
        f[i] = f[i - 3] + f[i - 2] + f[i - 1];
    }
    printf("%lld\n", f[n]);
    return 0;
}
/**************************************************************
	Problem: 23809
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/