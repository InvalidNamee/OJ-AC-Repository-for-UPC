#include <cstdio>

int main() {
    int n, mn = 0x3f3f3f3f;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%d.%d", &a, &b);
        a = a * 100 + b;
        mn = mn < a ? mn : a;
    }
    printf("%d.%02d\n", mn / 100, mn % 100);
    return 0;
}