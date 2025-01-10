#include <cstdio>

const int N = 200010;

bool f[N];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) {
        int l, r;
        scanf("%d%d", &l, &r);
        f[l] ^= 1;
        f[r + 1] ^= 1;
    }
    for (int i = 1; i <= n; ++i) {
        f[i] ^= f[i - 1];
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d", f[i]);
    }
    printf("\n");
    return 0;
}