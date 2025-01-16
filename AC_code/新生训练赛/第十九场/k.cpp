#include <cstdio>
#include <algorithm>

using namespace std;

int a[110];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n);
    int mnl = 0x3f3f3f3f;
    for (int i = 2; i < n; ++i) {
        for (int j = i + 2; j < n; ++j) {
            mnl = min(mnl, a[i - 1] + a[j - 1] - a[i] + a[n - 1] - a[j]);
        }
    }
    printf("%d\n", mnl);
    return 0;
}