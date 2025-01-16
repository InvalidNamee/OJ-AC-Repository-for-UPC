#include <cstdio>

int n, m;
int a[100010];

bool check(int mid) {
    int t = 0, cur = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i] > mid) return false;
        if (cur + a[i] > mid) {
            cur = a[i];
            t++;
        }
        else cur += a[i];
    }
    return t < m;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int l = 0, r = 1000000000;
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    printf("%d\n", l);
    return 0;
}