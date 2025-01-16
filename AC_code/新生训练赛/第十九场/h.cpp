#include <cstdio>

int cnt[110];

int main() {
    int n, m;
    int mn = 1, mx = 1, tot = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int t;
            scanf("%d", &t);
            cnt[i] += t ^ 1;
        }
        tot += cnt[i];
        if (cnt[i] > cnt[mx]) mx = i;
        if (cnt[i] < cnt[mn]) mn = i;
    }
    printf("%d %d %d\n", tot, mx, mn);
    return 0;
}