#include <cstdio>

long long res;

void gcd(long long a, long long b) {
    if (!b) return;
    res += a / b;
    gcd(b, a % b);
}

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    gcd(a, b);
    printf("%lld\n", res);
    return 0;
}
