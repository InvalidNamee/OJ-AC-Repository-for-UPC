#include <cstdio>

int main() {
    int n, a = 0, b = 0, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t[3];
        scanf("%d%d%d", &t[0], &t[1], &t[2]);
        a += t[0], b += t[1], c += t[2];
    }
    printf("%d %d %d %d\n", a, b, c, a + b + c);
    return 0;
}