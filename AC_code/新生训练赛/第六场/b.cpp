#include <cstdio>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int a, b;
    long long g = 1;
    scanf("%d%d", &a, &b);
    for (int i = 0; i < a; ++i) {
        int t;
        scanf("%d", &t);
        g = g / gcd(g, t) * t;
    }
    printf("%lld\n", b / g);
    return 0;
}