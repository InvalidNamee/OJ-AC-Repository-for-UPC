#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int a[100010];

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    a[n + 1] = x;
    sort(a + 1, a + n + 2);
    int t = a[2] - a[1];
    for (int i = 2; i <= n; ++i) {
        t = gcd(t, a[i + 1] - a[i]);
    }
    printf("%d\n", t);
    return 0;
}