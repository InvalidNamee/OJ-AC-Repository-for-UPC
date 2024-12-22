#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int ans = 0x3f3f3f3f;
int g[9], a[3], b[9], n;

void dfs(int u) {
    if (u == n) {
        int base = 0;
        int s[3] = {};
        bool f[3] = {};
        for (int i = 0; i < n; ++i) {
            if (g[i] == 3) continue;
            s[g[i]] += b[i];
            if (f[g[i]]) base += 10;
            else f[g[i]] = true;
        }
        for (int i = 0; i < 3; ++i) {
            if (!f[i]) return;
        }
        int mp[] = {0, 1, 2};
        for (int i = 0; i < 6; ++i) {
            int t = 0;
            for (int j = 0; j < 3; ++j) {
                t += abs(a[j] - s[mp[j]]);
            }
            ans = min(ans, base + t);
            next_permutation(mp, mp + 3);
        }
        return;
    }
    for (int i = 0; i <= 3; ++i) {
        g[u] = i;
        dfs(u + 1);
    }
}

int main() {
    scanf("%d%d%d%d", &n, &a[0], &a[1], &a[2]);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }
    dfs(0);
    printf("%d\n", ans);
    return 0;
}