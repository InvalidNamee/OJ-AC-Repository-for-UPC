#include <cstdio>

int main() {
    int x, m, n;
    scanf("%d%d%d", &x, &m, &n);
    m -= 3 * x, n -= x;
    //  head tail
    // b 4    2
    // c 5    4
    int a = n / 2 - 2 * (2 * n - m) / 3, b = (2 * n - m) / 3;
    if (n % 2 == 0 && (2 * n - m) % 3 == 0 && a > 0 && b > 0) {
        printf("%d %d\n", a, b);
    }
    else {
        printf("No Answer\n");
    }
    return 0;
}

/*
4x + 5y = m
4x + 8y = 2n

x = n / 2 - 2 (2n - m) / 3 

y = (2n - m) / 3
*/