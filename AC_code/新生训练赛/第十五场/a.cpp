#include <cstdio>

int main() {
    long long a, b;
    scanf("%lld=%lld", &a, &b);
    for (int i = 10; i <= 1000000000; i *= 10) {
        if ((a % i) * (a / i) == b) {
            printf("%lld*%lld=%lld\n", a / i, a % i, b);
            return 0;
        }
    }
    printf("Impossible\n");
    return 0;
}