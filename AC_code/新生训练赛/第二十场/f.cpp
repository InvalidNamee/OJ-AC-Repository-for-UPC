#include <cstdio>
#include <cmath>

int main() {
    int r, n;
    scanf("%d%d", &r, &n);
    int cur = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        cur += t;
        if (abs(cur) <= r) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}