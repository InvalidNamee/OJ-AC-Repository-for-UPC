#include <cstdio>

int a[110];

int main() {
    int n, m, p = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        int t;
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &t);
            if (t % 8 == 0)
                a[i] += t;
        }
        if (a[i] > a[p]) p = i;
    }
    printf("%d\n", p);
    return 0;
}