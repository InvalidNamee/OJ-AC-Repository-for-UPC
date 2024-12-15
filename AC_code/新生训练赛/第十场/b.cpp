#include <cstdio>
#include <vector>

using namespace std;

int cnt[1010], g[1000010];
int f[1010];

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &cnt[i]);
        for (int j = 1; j <= cnt[i]; ++j) {
            int t;
            scanf("%d", &t);
            g[t] = i;
        }
    }
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        f[g[t]]++;
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= m; ++i) {
        // printf("%d ", f[i]);
        if (f[i]) ans1++;
        if (f[i] && f[i] == cnt[i]) ans2++;
    }
    // printf("\n");
    printf("%d\n%d\n", ans1, ans2);
    return 0;
}