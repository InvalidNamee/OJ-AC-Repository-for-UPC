#include <cstdio>
#include <cstring>

using namespace std;

int a[2010];
int s[2010];

int main() {
    int T, n, p = 0, mx = 0;
    scanf("%d%d", &T, &n);
    for (int i = 1; i <= T; ++i) {
        memset(s, 0, sizeof(s));
        int cnt = 0;
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &a[j]);
            cnt += s[a[j]];
            for (int k = 1; k < j; ++k) {
                if (2 * a[j] - a[k] > 0 && 2 * a[j] - a[k] <= n) s[2 * a[j] - a[k]]++;
            }
        }
        if (cnt > mx) {
            p = i;
            mx = cnt;
        }
    }
    printf("%d %d\n", p, mx);
    return 0;
}

/*
2aj - ai = ak
*/