#include <cstdio>

int sum(long long n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long n, base = 10, t = 0;
        int s;
        scanf("%lld%d", &n, &s);
        while (sum(n) > s) {
            t += base - n % base;
            n += base - n % base;
            base *= 10;
        }
        printf("%lld\n", t);
    }
    return 0;
}