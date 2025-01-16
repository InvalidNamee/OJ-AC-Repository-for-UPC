#include <cstdio>
#define int long long

int a[110];

signed main() {
    int n, s = 0;
    scanf("%lld", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
        s += a[i];
    }
    for (int i = 1; i <= n; ++i) {
        if (a[i] < 0) {
            int w = 0;
            for (int j = i; j <= n; j += i) {
                w += -a[j];
            }
            if (w > 0) {
                s += w;
                for (int j = i; j <= n; j += i) {
                    a[j] = 0;
                }
            }
        }
    }
    printf("%lld\n", s);
    return 0;
}