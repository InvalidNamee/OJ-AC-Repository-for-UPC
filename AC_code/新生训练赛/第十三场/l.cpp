#include <cstdio>

int a[100010];

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    int l = 0, r = 0, res = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] > r) {
            res += r - l;
            // printf("%d %d\n", l, r);
            l = a[i], r = a[i] + x;
        }
        else r = a[i] + x;
    }
            // printf("%d %d\n", l, r);
    res += r - l;
    printf("%d\n", res);
    return 0;
}