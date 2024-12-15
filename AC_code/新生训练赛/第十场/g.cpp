#include <cstdio>

int cnt[1010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%d", &cnt[i]);
    int ans = 0;
    for (int k = 1; k <= 100; ++k) {
        for (int i = n; i; --i) {
            if (cnt[i] && !cnt[i - 1]) ans++;
            if (cnt[i]) cnt[i]--;
        }
    }
    printf("%d\n", ans);
    return 0;
}