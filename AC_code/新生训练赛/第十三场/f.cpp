#include <cstdio>

int a[3010];

int main() {
    int n, res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i) {
        int l = i, r = i;
        while (l > 1 && a[l - 1] <= a[l]) l--;
        while (r < n && a[r] >= a[r + 1]) r++;
        res = res > r - l + 1 ? res : r - l + 1;
    }
    printf("%d\n", res);
    return 0;
}