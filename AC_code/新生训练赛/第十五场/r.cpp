#include <cstdio>

int main() {
    int n, a, b, cnt = 0;
    scanf("%d%d%d", &n, &a, &b);
    for (int i = 1; i <= n; ++i) {
        if ((i - 1) % a + 1 == (i - 1) % b + 1) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}