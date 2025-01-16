#include <cstdio>

int main() {
    __int128_t res = 1;
    int n, m;
    scanf("%d%d", &n, &m);
    n--, m--;
    // c(n, m);
    if (m == 0 || m == n) {
        printf("1\n");
        return 0;
    }
    m = n - m > m ? m : n - m;
    for (int i = 0; i < m; ++i) {
        res *= (n - i);
    }
    for (int i = 1; i <= m; ++i) {
        res /= i;
    }
    printf("%lld\n", (long long)res);
    return 0;
}