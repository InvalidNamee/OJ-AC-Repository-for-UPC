#include <cstdio>

int main() {
    int n, res = 0x3f3f3f3f;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t, cnt = 0;
        scanf("%d", &t);
        while (!(t & 1)) t >>= 1, cnt++;
        res = res > cnt ? cnt : res;
    }
    printf("%d\n", res);
    return 0;
}