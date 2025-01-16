#include <cstdio>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d\n", (1 << m) * ((n - m) * 100 + m * 1900));
    return 0;
}