#include <cstdio>

template<typename T>
T gcd(T a, T b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    long long a, b, c, d;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    long long e = a * d - b * c, f = b * d, g = gcd(e, f);
    printf("%lld %lld\n", e / g, f / g);
    return 0;
}