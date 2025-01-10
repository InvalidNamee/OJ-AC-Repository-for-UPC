#include <cstdio>
#include <algorithm>

using namespace std;

int t[100010];
int n, k;

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &t[i]);
    }
    for (int i = n; i; --i) {
        t[i] -= t[i - 1];
    }
    sort(t + 2, t + n + 1);
    int s = 0;
    for (int i = 2; i <= n - k + 1; ++i) {
        s += t[i];
    }
    printf("%d\n", s + k);
    return 0;
}