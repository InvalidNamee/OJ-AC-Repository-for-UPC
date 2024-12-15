#include <cstdio>

int main() {
    int p;
    long long n, cnt = 0, ans = 0;
    scanf("%d%lld", &p, &n);
    for (int i = 1; i <= 144; ++i) {
        int p1 = (i - 1) % 12 + 1, p2 = (p - 1 + (i / 12)) % 12 + 1;
        if (p1 == p2 && !(i % 12 == 0 && p2 == 12)) cnt++;
        if (n % 144 == i) ans = cnt;
    }
    printf("%lld\n", ans + cnt * (n / 144));
    return 0;
}