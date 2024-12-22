#include <cstdio>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int a[100010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int res = a[1];
    for (int i = 2; i <= n; ++i) {
        res = gcd(res, a[i]);
    }
    printf("%d\n", res);
    return 0;
}
