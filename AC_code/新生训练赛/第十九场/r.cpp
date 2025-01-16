#include <cstdio>
#include <cmath>

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    int t = 0;
    while (a <= b) {
        a <<= 1;
        t++;
    }
    printf("%d\n", t);
    return 0;
}