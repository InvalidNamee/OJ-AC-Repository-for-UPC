#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int p = 1, res = 0;
    do {
        res++;
        if (p <= n) p = 2 * p;
        else p = 2 * (p - n) - 1;
    } while (p != 1);
    printf("%d\n", res);
    return 0;
}