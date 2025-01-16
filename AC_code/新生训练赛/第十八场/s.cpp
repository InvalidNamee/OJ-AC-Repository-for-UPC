#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

struct edge {
    int x, y;
    double w;

    bool operator <(const edge &a) {
        return w < a.w;
    }
} ed[500010];

int x[1010], y[1010], R[1010];
int fa[1010];

int getfa(int x) {
    return x == fa[x] ? x : fa[x] = getfa(fa[x]);
}

void merge(int x, int y) {
    x = getfa(x), y = getfa(y);
    fa[y] = x;
}

int main() {
    int n, m = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d%d", &x[i], &y[i], &R[i]);
        for (int j = 1; j < i; ++j) {
            ed[++m] = {i, j, sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)) - R[i] - R[j]};
        }
    }
    for (int i = 1; i <= n; ++i) {
        fa[i] = i;
    }
    double res = 0;
    sort(ed + 1, ed + m + 1);
    for (int i = 1; i <= m; ++i) {
        int x = getfa(ed[i].x), y = getfa(ed[i].y);
        if (x == y) continue;
        else {
            merge(x, y);
            res = ed[i].w;
        }
    }
    printf("%d\n", (int)ceil(res));
    return 0;
}