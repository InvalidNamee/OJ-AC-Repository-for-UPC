#include <cstdio>

long long calc(long long x) {
    if (x % 4 == 1) return 1;
    else if (x % 4 == 2) return x ^ 1;
    else if (x % 4 == 3) return 0;
    else return x;
}

int main() {
    long long l, r;
    scanf("%lld%lld", &l, &r);
    if (l == 0 && r == 0) printf("0\n");
    else if (l == 0) printf("%lld\n", calc(r));
    else printf("%lld\n", calc(r) ^ calc(l - 1));
    return 0;
}