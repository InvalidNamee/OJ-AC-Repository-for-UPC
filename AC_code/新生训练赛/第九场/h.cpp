#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    int mn = 0x7fffffff;
    for (int i = k; i <= n; ++i) {
        mn = min(mn, a[i] - a[i - k + 1]);
    }
    printf("%d\n", mn);
    return 0;
}