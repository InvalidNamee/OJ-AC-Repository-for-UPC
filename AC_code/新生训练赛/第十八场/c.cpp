#include <cstdio>
#include <iostream>

using namespace std;

long long ans[100010];
int fa[100010], cnt[100010];
pair<int, int> ed[100010];

int getfa(int x) {
    if (x == fa[x]) return x;
    else return fa[x] = getfa(fa[x]);
}

void merge(int x, int y) {
    x = getfa(x), y = getfa(y);
    fa[y] = x;
    cnt[x] += cnt[y];
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        fa[i] = i, cnt[i] = 1;
    }
    for (int i = 1; i <= m; ++i) {
        scanf("%d%d", &ed[i].first, &ed[i].second);
    }
    ans[m] = (long long)n * (n - 1) / 2;
    for (int i = m; i > 1; --i) {
        int x = ed[i].first, y = ed[i].second;
        x = getfa(x), y = getfa(y);
        if (x == y) ans[i - 1] = ans[i];
        else {
            ans[i - 1] = ans[i] - (long long)cnt[x] * cnt[y];
            merge(x, y);
        }
    }
    for (int i = 1; i <= m; ++i) {
        printf("%lld\n", ans[i]);
    }
    return 0;
}