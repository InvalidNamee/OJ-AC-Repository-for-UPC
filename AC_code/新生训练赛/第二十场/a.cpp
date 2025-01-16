#include <cstdio>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    int g = gcd(x, y);
    printf("%lld\n", (long long)y / g);
    return 0;
}