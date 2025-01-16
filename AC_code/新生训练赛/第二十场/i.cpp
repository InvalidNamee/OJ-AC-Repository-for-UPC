#include <cstdio>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int n;
    scanf("%d", &n);
    int t;
    scanf("%d", &t);
    for (int i = 1; i < n; ++i) {
        int tt;
        scanf("%d", &tt);
        t = gcd(t, tt);
    }
    printf("%d\n", t);
    return 0;
}