#include <cstdio>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

bool win[3][3] = {
    {0, 1, 0},
    {0, 0, 1},
    {1, 0, 0}
};

int a[110], b[110];

int main() {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int t = n * m / gcd(n, m), t1 = 0, t2 = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; ++i) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < t; ++i) {
        if (i == k % t) t2 = t1;
        t1 += win[a[i % n] - 1][b[i % m] - 1];
    }
    printf("%d\n", k / t * t1 + t2);
    return 0;
}