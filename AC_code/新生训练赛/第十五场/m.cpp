#include <cstdio>

int main() {
    int n, cur = 0, res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        cur += t;
        res = res > cur ? cur : res;
    }
    printf("%d\n", -res);
    return 0;
}