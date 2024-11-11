#include <cstdio>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int t = (c - a) * 60 + d - b;
    printf("%d %d\n", t / 60, t % 60);
    return 0;
}