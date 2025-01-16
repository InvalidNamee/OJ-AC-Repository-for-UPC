#include <cstdio>

int main() {
    int n, q, p = 0;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= q; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a == 1) p = ((p + b) % n + n) % n;
        else p = ((p - b) % n + n) % n;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d\n", (i + p) % n);
    }
    return 0;
}