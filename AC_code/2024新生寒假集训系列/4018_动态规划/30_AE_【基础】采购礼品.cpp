#include <cstdio>
#include <iostream>

using namespace std;

long long c[10010], d[10010];
long long f[10010];
int fa[10010];

int getfa(int x) {
    return x == fa[x] ? x : fa[x] = getfa(fa[x]);
}

void merge(int x, int y) {
    x = getfa(x), y = getfa(y);
    if (x == y) return;
    fa[y] = x;
    c[x] += c[y];
    d[x] += d[y];
}

int main() {
    int n, m, w;
    scanf("%d%d%d", &n, &m, &w);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld%lld", &c[i], &d[i]);
        fa[i] = i;
    }
    for (int i = 1; i <= m; ++i) {
        int u, v;
        scanf("%d%d", &u, &v);
        merge(u, v);
    }
    for (int i = 1; i <= n; ++i) {
        if (i == fa[i]) {
            for (int j = w; j >= c[i]; --j) {
                f[j] = max(f[j], f[j - c[i]] + d[i]);
            }
        }
    }
    printf("%lld\n", f[w]);
    return 0;
}
/**************************************************************
	Problem: 23899
	Language: C++
	Result: 正确
	Time:35 ms
	Memory:2496 kb
****************************************************************/