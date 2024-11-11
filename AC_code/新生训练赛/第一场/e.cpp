#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a + b <= 50) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}