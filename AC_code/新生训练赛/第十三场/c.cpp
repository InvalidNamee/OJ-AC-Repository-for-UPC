#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 8; i <= n; i += 10) {
        printf("%d %d %d\n", i, i * 2, i * 4);
    }
    return 0;
}