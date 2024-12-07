#include <cstdio>
#define int long long

int s[50];

signed main() {
    int n;
    scanf("%lld", &n);
    for (int i = 1; i <= n; ++i) {
        int w, x;
        scanf("%lld%lld", &w, &x);
        x = 24 - x;
        s[x + 9] += w, s[x + 18] -= w;
    }
    for (int i = 1; i < 48; ++i) {
        s[i] += s[i - 1];
    }
    int p = 0;
    for (int i = 1; i < 24; ++i) {
        if (s[p] + s[p + 24] < s[i] + s[i + 24]) {
            p = i;
        }
    }
    printf("%lld\n", s[p] + s[p + 24]);
    return 0;
}

/*
[9, 18] - (xi - 0)

0 xi
  9
*/