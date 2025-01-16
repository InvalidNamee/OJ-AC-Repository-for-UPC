#include <cstdio>
#include <cmath>

int main() {
    int n, x = 0, y = 0, cur = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t, tx, ty;
        scanf("%d%d%d", &t, &tx, &ty);
        if (abs(tx - x) + abs(ty - y) > t - cur || (abs(tx - x) + abs(ty - y)) % 2 != (t - cur) % 2) {
            printf("No\n");
            return 0;
        }
        x = tx, y = ty, cur = t;
    }
    printf("Yes\n");
    return 0;
}