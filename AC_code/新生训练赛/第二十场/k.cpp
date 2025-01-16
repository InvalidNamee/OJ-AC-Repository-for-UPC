#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    int res = 0;
    for (int i = n; i > 0; i -= m) {
        res += a[i];
    }
    printf("%d\n", res);
    return 0;
}