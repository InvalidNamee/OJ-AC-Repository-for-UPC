#include <cstdio>

const int N = 1000010;

int a[N], f[N];

int main() {
    int n, k;
    long long ans = 0;
    scanf("%d%d", &n, &k);
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        a[i] = (a[i] + a[i - 1]) % k;
        ans += f[a[i]];
        f[a[i]]++;
    }
    printf("%lld\n", ans);
    return 0;
}