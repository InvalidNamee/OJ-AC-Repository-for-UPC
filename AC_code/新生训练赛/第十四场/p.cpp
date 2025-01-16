#include <cstdio>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < 3; ++i) {
        if (n % 10 == 1) cnt++;
        n /= 10;
    }
    printf("%d\n", cnt);
    return 0;
}