#include <cstdio>

int a[100010];
int n, m;

bool check(int mid) {
    int t = 1, mx = 0, use = 0, tot = 0;
    for (int i = 1; i <= n; ++i) {
        mx = mx > a[i] ? mx : a[i];
        if (tot + a[i] > mid) {
            if (!use) {
                use = true;
                tot = tot + a[i] - mx;
            }
            else {
                t++;
                use = false;
                mx = 0, tot = 0;
                i--;
            }
        }
        else {
            tot += a[i];
        }
    }
    return t <= m;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int l = 0, r = 1000000000;
    while (l < r) {
        int mid = (long long)(l + r) >> 1;
        if (check(mid)) r = mid;
        else l = mid + 1;
    }
    printf("%d\n", l);
    return 0;
}