#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", (a + a + c + c) * b / 2);
    return 0;
}