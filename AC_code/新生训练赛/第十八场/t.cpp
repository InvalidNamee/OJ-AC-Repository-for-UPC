#include <cstdio>

int a[2010];

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        bool f[2] = {};
        int s = 0;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
            int t;
            scanf("%d", &t);
            s += t;
            f[t & 1] = true;
        }
        if (f[0] && f[1] || (s & 1)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}