#include <cstdio>

int a[1000010], p;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x == 0) a[++p] = y + 1;
        else a[y] = 0;
    }
    long long ans = 0;
    for (int i = 1; i <= p; ++i) {
        ans += a[i];
    }
    printf("%lld\n", ans);
    return 0;
}