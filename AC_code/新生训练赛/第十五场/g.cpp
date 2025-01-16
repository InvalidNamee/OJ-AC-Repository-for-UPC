#include <cstdio>

int d[50010];
int L, n, m;

bool check(int mid) {
    int cnt = 0, l = 0;
    for (int i = 1; i <= n; ++i) {
        if (d[i] - l < mid) cnt++;
        else l = d[i];
    }
    return cnt <= m;
}

int main() {
    scanf("%d%d%d", &L, &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &d[i]);
    }
    d[++n] = L;
    int l = 0, r = L;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d\n", l);
    return 0;
}