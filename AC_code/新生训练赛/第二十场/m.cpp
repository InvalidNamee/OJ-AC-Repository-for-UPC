#include <cstdio>

int a[5010], b[5010];

int main() {
    int n, m, B, G;
    scanf("%d%d%d%d", &n, &m, &B, &G);
    for (int i = 0; i < B; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        a[y + 1]--, a[x]++;
    }
    for (int i = 0; i < G; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        b[y + 1]--, b[x]++;
    }
    int r = 0, c = 0;
    for (int i = 1; i <= n; ++i) {
        a[i] += a[i - 1];
        if (!a[i]) r++;
    }
    for (int i = 1; i <= m; ++i) {
        b[i] += b[i - 1];
        if (!b[i]) c++;
    }
    printf("%d\n", n * m - r * c);
    return 0;
}