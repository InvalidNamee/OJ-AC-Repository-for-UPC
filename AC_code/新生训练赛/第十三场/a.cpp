#include <cstdio>

int main() {
    int n, prev = 0x3f3f3f3f;
    scanf("%d", &n);

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a + b + c > prev) cnt++;
        prev = a + b + c;
    }
    printf("%d\n", cnt);
    return 0;
}