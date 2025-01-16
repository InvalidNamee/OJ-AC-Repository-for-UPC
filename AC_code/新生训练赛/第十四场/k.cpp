#include <cstdio>

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n", a * b * (b + 1) / 2);
    return 0;
}