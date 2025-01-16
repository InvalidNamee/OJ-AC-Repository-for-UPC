#include <cstdio>

int s(int n) {
    int res = 0;
    while (n) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int n, a, b;
    int res = 0;
    scanf("%d%d%d", &n, &a, &b);
    for (int i = 1; i <= n; ++i) {
        int sum = s(i);
        if (a <= sum && sum <= b) {
            res += i;
        }
    }
    printf("%d\n", res);
    return 0;
}