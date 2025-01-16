#include <cstdio>

int main() {
    int n, k, cur = 0, res = 0;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        if (t > k) res = res > cur ? res : cur, cur = 0;
        else cur++;
    }
    res = res > cur ? res : cur;
    printf("%d\n", res);
    return 0;
}