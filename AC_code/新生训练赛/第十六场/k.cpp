#include <cstdio>

int main() {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= n; ++i) {
        if (i == k) {
            int cur, l = 0, mxl = 0;
            for (int j = 1; j <= m; ++j) {
                scanf("%d", &cur);
                if (cur) l++;
                else {
                    mxl = mxl > l ? mxl : l;
                    l = 0;
                }
            }
            mxl = mxl > l ? mxl : l;
            printf("%d\n", mxl);
            break;
        }
        for (int j = 1; j <= m; ++j) {
            int t;
            scanf("%d", &t);
        }
    }
    return 0;
}