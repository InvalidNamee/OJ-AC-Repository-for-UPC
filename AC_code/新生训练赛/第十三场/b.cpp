#include <cstdio>

int main() {
    int n, mx = -0x3f3f3f3f, nmx = -0x3f3f3f3f;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int c;
        scanf("%d", &c);
        if (c > mx) {
            nmx = mx;
            mx = c;
        }
        else if (c > nmx) nmx = c;
    }
    printf("%d %d\n", mx, nmx);
    return 0;
}