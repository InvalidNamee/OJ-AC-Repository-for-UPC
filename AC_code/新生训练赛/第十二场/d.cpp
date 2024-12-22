#include <cstdio>

long long f[71];

int main() {
    int n;
    scanf("%d", &n);
    f[0] = 1;
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= n; ++i) {
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    }
    printf("%lld\n", f[n]);
    return 0;
}