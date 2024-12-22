#include <cstdio>

int main() {
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("%d\n", c * d + a * (b + d + e));
    return 0;
}