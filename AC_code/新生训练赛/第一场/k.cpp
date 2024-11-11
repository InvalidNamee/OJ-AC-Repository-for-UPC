#include <cstdio>

bool a[10010];

int main() {
    int l, m, cnt = 0;
    scanf("%d%d", &l, &m);
    for (int i = 1; i <= m; ++i) {
        int l, r;
        scanf("%d%d", &l, &r);
        for (int j = l; j <= r; ++j) {
            a[j] = true;
        }
    }
    for (int i = 0; i <= l; ++i) {
        cnt += a[i] ^ 1;
    }
    printf("%d\n", cnt);
    return 0;
}