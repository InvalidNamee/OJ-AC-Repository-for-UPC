#include <cstdio>
#include <algorithm>

using namespace std;

int a[31];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    int t;
    scanf("%d", &t);
    int l = 0, r = 0;
    for (int i = 1; i <= n; ++i) {
        if (!l && a[i] == t) l = i;
        if (a[i] == t) r = i;
    }
    printf("%d %d\n", l, r);
    return 0;
}