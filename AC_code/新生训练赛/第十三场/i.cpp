#include <cstdio>

int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    int l = 0, r = n / a;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if ((long long)a * mid + (long long)mid * (mid - 1) / 2 * b >= n) r = mid - 1;
        else l = mid;
    }
    printf("%d\n", n - (a * l + l * (l - 1) / 2 * b));
    return 0;
}
