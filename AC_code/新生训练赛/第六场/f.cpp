#include <cstdio>

int main() {
    int n, t;
    int c = 0x3f3f3f3f; 
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; ++i) {
        int tc, tt;
        scanf("%d%d", &tc, &tt);
        if (tt <= t) {
            if (c > tc) {
                c = tc;
            }
        }
    }
    if (c == 0x3f3f3f3f) printf("TLE\n");
    else printf("%d\n", c);
    return 0;
}